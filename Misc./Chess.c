/* In a chessboard given two positions as input, return True if they have same color else False.
Note: For the purpose of auto-grading, take inputs as 4 numbers indicating the two positions. For example 0 0 0 2 as input indicate positions (0,0) and (0, 2).
Hint - It is a small program. Imagine a chess board on a piece of paper, write the indices for row and column and think which condition is satisfied for same color. */

#include<stdio.h>
int main()
{
	int a, b, c, d, sum;
	scanf("%d %d %d %d",&a, &b, &c, &d);
	sum = a + b + c + d;
	if (sum % 2 == 0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}

/* Output:
1 3 6 7
False

1 1 8 4
True
*/
