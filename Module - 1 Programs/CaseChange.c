/* Algorithm
1. Start
2. Accept a character
3. If the character is lowercase, its ASCII value will be in the range 97 to 122 and upper case will be in the range 65 to 90.
4. For conversion from lower case to upper case, subtract 32 and for conversion from upper to lower case, add 32.
5. Stop */

#include<stdio.h>
int main() {
	char ch;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	if (ch <= 90 && ch >= 65)
	printf("Changed case of %c is %c\n", ch, ch + 32);
	
	else
	printf("Changed case of %c is %c\n", ch, ch - 32);
	
	return 0;
}

/* Output
Enter a character : a
Changed case of a is A
~/CSEN1011-3/Module-01 Programs$ ./a.out
Enter a character : A
Changed case of A is a

Learnings
01. ASCII characterset.
02. Logical operator && (and)
*/
