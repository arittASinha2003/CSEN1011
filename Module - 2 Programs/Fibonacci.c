#include<stdio.h>
int main() {
	int num, i;
	
	int n1 = 0, n2 = 1;
	int nextnum = n1 + n2;
	
	printf("Enter number of terms: ");
	scanf("%d", &num);
	
	printf("Fibonacci Series: %d, %d, ", n1, n2);
	
	for (i = 3; i <= num; i++)
	{
		printf("%d, ", nextnum);
		n1 = n2;
		n2 = nextnum;
		nextnum = n1 + n2;
	}
	return 0;
}
