/* Algorithm 
1. Start
2. Enter the value of fact
3. From value fact upto 1 multiply each digit
4. The final value is factorial Number
5. Stop */

#include<stdio.h>
int main(){
	int num,i,f=1;
  
  //printf("Enter a number: ");
	scanf("%d",&num);
  
	if(num>=0 && num<10)
	{
		for(i=1;i<=num;i++)
		{
			f=f*i;
		}
		printf("%d",f);
	}
	else if(num>=10)
	{
		printf("Too big a number");
	}
	else
	{
		printf("Negative Number");
	}
	return 0;
}

/* Output:
//Enter a number: 5
120

//Enter a number: 10
Too big a number

//Enter a number: -1
Negative Number
*/
