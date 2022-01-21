// Write a C program which prints maximum and minimum values in an array

#include<stdio.h>
#define SIZE 5
int main(void)
{
    int data_list[SIZE];
    int max, min;
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &data_list[i]);
    //Complete the rest of the code
    max = data_list[0];
    min = data_list[0];
    for (int i = 0; i < SIZE - 1; i++)
    {
        if (min > data_list[i+1])
        {
            min = data_list[i+1];
        }
        if (max < data_list[i+1])
        {
            max = data_list[i+1];
        }
    }
    
    printf("%d %d", max, min);
}

/* Output:
13
26
39
52
65
65 13
*/
