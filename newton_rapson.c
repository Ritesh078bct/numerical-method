#include <stdio.h>
#include <math.h>
#include<conio.h>
#define f(x) pow(x, 3) + (2 * x) - 5
#define g(x) (3*pow(x, 2))+2 
int main()
{
    float x0, x1, f0, g0, f1, e;
    int i = 1;
     up:
    printf("enter a initial guess and tolerance");
    scanf("\n%f\n%f", &x0, &e);
    f0 = f(x0);

   
  g0 = g(x0);
   if(g0 == 0)
    {

        goto up;
        
       
    }
    printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do
    {
        f0 = f(x0);

        g0 = g(x0);
        x1 = x0 - (f0 / g0);

        f1 = f(x1);
        printf("%d\t\t%f\t%f\t%f\t%f\n", i, x0, f0, x1, f1);
        x0 = x1;
        i++;

    } while (fabs(f1) > e);
    printf("%f \t is the root", x1);
    getch();
    return 0;
}
