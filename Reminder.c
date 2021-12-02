#include<stdio.h>
int main() {
    int num, div;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter divisor: ");
    scanf("%d", &div);

    printf("Reminder = %d\n", num - div * (num/div));
    
    return 0;
}
