/* Algorithm
1. Start
2. Accept a character
3. If the character is lowercase, its ASCII value will be in the range 97 to 122 and upper case will be in the range 65 to 90.
04. For conversion from lower case to upper case, subtract 32 and for conversion from upper to lower case, add 32.
04. Stop */

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

/* Output
Enter a character : a
A
~/CSEN1011-3/Module-01 Programs$ ./a.out
Enter a character : A
a

Learnings
01. ASCII characterset.
02. Logical operator && (and)
*/
