#include<stdio.h>
int main() {
	int a = 1, b = 2;
	
	printf("Before Swapping\n");
    printf("a=%d  b=%d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After Swapping\n");
    printf("a=%d  b=%d\n", a, b);   
    return 0;
}
