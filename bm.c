#include <stdio.h>
#include <math.h>
float f(float x)
{
    float val;
    val = pow(x, 3) + (2 * x) - 5;
    return val;
}
int main()
{
    float a, b, c, fa, fb, fc, e;
    int i = 1;
    printf("Enter two initial gueses and stopping point\n");
    scanf("%f\n%f\n%f", &a, &b, &e);

    fa = f(a);
    fb = f(b);
    while (fa * fb > 0)
    {
        printf("wrong choices\nEnter new choices\n ");
        scanf("%f\n%f", &a, &b);
        fa = f(a);
        fb = f(b);
    }
    printf("Step\t\ta\tb\tc\tfa\tfb\tfc\n");
    do
    {
        c = (a + b) / 2;
        fa = f(a);
        fb = f(b);
        fc = f(c);

        printf("%d\t\t%f\t%f\t%f\t%f\t%f\t%f\n", i, a, b, c, fa, fb, fc);

        if (fa * fc < 0)
        {
            b = c;

            // fb = f(b);
        }
        else
        {
            a = c;

            // fa = f(a);
        }
        i++;

    } while (fabs(fc) > e);

    printf("root =%f", c);
    return 0;
}