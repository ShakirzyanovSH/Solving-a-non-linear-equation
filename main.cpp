#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>

int nIter;

double f(double x)
{
	return cos(pow(x,2))-10*x;
}

double fIter(double x)
{
	return cos(pow(x,2))/10;
}


int main()
{
	nIter=0;
	double e;
	double ex;
	double x1,x2;
	double a,b;

	
	printf(" Solving a non-linear equation. \n");
	printf(" cos(x*x)-10x = 0 on the interval [a, b] \n\n");

	printf(" The left border of the interval a: ");
	scanf("%lf",&a);
	printf(" Right border of the interval b: ");
	scanf("%lf",&b);
	printf(" Specify calculation accuracy e: ");
	scanf("%lf",&e);
	printf("\n");
	x1 = (a+b)/2;
	do
	{
		nIter++;
		x2 = fIter(x1);
		ex = fabs(x2-x1);
		printf(" x%d = %-6.4lf x%d = %-6.4lf ex = %-4.1e \n",nIter,x1,nIter+1,x2,ex);
		x1 = x2;
	} while(ex>e);

	printf("\n Root of the equation: x = %lf \n",x2);
	printf(" Function value f(x) = %lf \n",f(x2));
	printf(" Number of iterations: n = %d \n",nIter);
	

	getch();
	return 0;
}

