#include<stdio.h>
int main() {
	int num, sum = 0, i = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (i<num)
	{
		if (num % i == 0)
		{
			sum = sum + i;
		}
		i++;
	}
	if (sum == num)
	printf("It is a Perfect Number");
	
	else
	printf("It is not a Perfect Number");
	
	return 0;
}
