/* Algorithm 
1. Start
2. Enter the value of fact
3. From value fact upto 1 multiply each digit
4. The final value is factorial Number
5. Stop */

#include<stdio.h>
int main(){
	int num, i, f=1, sum=0;
	
	//printf("Enter a number: ");
	scanf("%d",&num);
  
	if(num>=0 && num<10)
	{
		for(i=1;i<=num;i++)
		{
			f=f*i;
		}
		printf("%d\n",f);
		
		// For finding sum of the digits of the factorial
		while (f > 0)
		{
		    sum += (f % 10);
		    f /= 10;
		}
		printf("Sum of the digits is %d\n", sum);
		//Till here
	}
	else if(num>=10)
	{
		printf("Too big a number\n");
	}
	else
	{
		printf("Negative Number\n");
	}
	return 0;
}

/* Output:
//Enter a number: 5
120
Sum of the digits is 3

//Enter a number: 10
Too big a number

//Enter a number: -1
Negative Number
*/
