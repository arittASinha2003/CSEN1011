#include<stdio.h>
int main()
{
	int a, b;
	
	printf("Enter 1st value: ");
	scanf("%d", &a);
	
	printf("Enter 2nd value: ");
	scanf("%d", &b);
	
	printf("Before Swapping...\n");
    printf("a=%d  b=%d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After Swapping...\n");
    printf("a=%d  b=%d\n", a, b);   
    return 0;
}

/* Output:
Enter 1st value: 24
Enter 2nd value: 25
Before Swapping...
a=24  b=25
After Swapping...
a=25  b=24
*/
