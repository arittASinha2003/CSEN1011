#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	 float p, t, r, si, ci;
	 printf("Enter Principal Amount: ");
	 scanf("%f", &p);
	 printf("Enter Time Period: ");
	 scanf("%f", &t);
	 printf("Enter Rate of Interest: ");
	 scanf("%f", &r);
	
	 /* Calculating Simple Interest */
	 si = (p * r * t)/100;
	
	 /* Calculating Compound Interest */
	 ci = p * (pow(1+r/100, t) - 1);
	
	 printf("Simple Interest = %0.3f\n", si);
	 printf("Compound Interest = %0.3f", ci);
	 return(0);
}
