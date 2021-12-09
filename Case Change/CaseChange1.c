#include<stdio.h>
int main() {
	char i;
	printf("Enter a character: ");
	scanf("%c", &i);
	
	if (i >= 97 && i <= 122)
	{
		printf("%c", i - 32);
	}
	else
	{
		printf("%c", i + 32);
	}
	return 0;
}
