#include<stdio.h>

int main()
{
   int a, b, result;
   
   printf("Enter 1st number: ");
   scanf("%d", &a);
   
   printf("Enter 2nd number: ");
   scanf("%d", &b);
   
   result = a + b;
   
   printf("The sum of %d and %d is %d", a, b, result);
   
   return 0;
}
