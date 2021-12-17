/*Develop a C program to covert upper-case character to a lower-case character and vice versa.
It should display a message "Incorrect data" if a non-character is given as input.*/
#include<stdio.h>
int main() {
    char i;
    
    //printf("Enter a character: ");
    scanf("%c", &i);
    
    if (i >= 97 && i <= 122)
    {
        printf("%c", i - 32);
    }
    else if (i >= 65 && i <= 90)
    {
        printf("%c", i + 32);
    }
    else
    {
        printf("Incorrect data");
    }
    return 0;
}
