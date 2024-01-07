#include<stdio.h>

#include<math.h>


/* Defining equation to be solved.
   Change this equation to solve another problem. */
#define    f(x)    x*x*x + 2*x - 5

int  main()
{
	 float x0, x1, x2, f0, f1, f2, e;
	 int step = 1, N;
	
	 /* Inputs */
	 printf("\nEnter initial guesses:\n");
	 scanf("%f%f", &x0, &x1);

	
	 /* Implementing Secant Method */
	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 do
	 {
		  f0 = f(x0);
		  f1 = f(x1);
		  if(f0 == f1)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }
		  
		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);
		  
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,x1,x2, f2);
		  
		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		  f1 = f2;
		  
		  step = step + 1;
		  
		
	 }while(fabs(f2)>0.0001);
	
	 printf("\nRoot is: %f", x2);
	 return 0;
}