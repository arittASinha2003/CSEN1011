// Write a C program which prints True if the array taken as input is already sorted. Otherwise prints False.

#include<stdio.h>
#define SIZE 5
int main(void)
{
    int a = 0;
    int data_list[SIZE];
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &data_list[i]);
    //Complete the rest of the code
    for (int i = 0; i < SIZE-1; i++)    //i < size is also correct
    {
        if (data_list[i] > data_list[i+1])
        {
            a += 1;
        }
    }
    if (a == 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

/* Output:
5 10 15 20 25
True

12 13 24 7 43
False
*/
