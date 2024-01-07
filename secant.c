#include <stdio.h>
#include <math.h>

// #define f(x) pow(x, 3) + (2 * x) - 5

float f(float x)
{
    float val;
    val = pow(x, 3) + (2 * x) - 5;
    return val;
}
int main()
{
    float a, b, c, fa, fb, fc, itr, s;
    int i = 1;
    printf("Enter two initial gueses and stopping point\n");
    scanf("%f\n%f\n%f", &a, &b, &s);

    printf("Step\t\ta\tb\tc\tfa\tfb\tfc\n");
    do
    {
      
  fa = f(a);
        fb = f(b);
        c = b - (a-b) * (fb / (fa - fb));
        
        fc = f(c);

        printf("%d\t\t%f\t%f\t%f\t%f\t%f\t%f\n", i, a, b, c, fa, fb, fc);

        a = b;
        // fa = fb;
        b = c;

        // fb = fc;
        i = i + 1;

    } while (fabs(fc) > s);
    printf("root is:%f", c);

    return 0;
}