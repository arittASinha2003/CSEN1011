#include<stdio.h>
int main() {
	int i, j, rows;
	char alphabet = 'A';
	
	printf("Enter no. of rows: ");
	scanf("%d", &rows);
	
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c ", alphabet);
		}
		alphabet++;
		printf("\n");
	}
	return 0;
}

/* Output:
Enter no. of rows: 5
A 
B B 
C C C 
D D D D 
E E E E E
*/
