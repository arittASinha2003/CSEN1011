// Write a C program which searches for an element in the array. If the element is found, it should print its index. Else, it should print "Element not found".

#include<stdio.h>
#define SIZE 5
int main(void)
{
    int data_list[SIZE];
    int element;  //Element to be searched for
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &data_list[i]);
    scanf("%d", &element);
    //Complete the rest of the code
    for (int i = 0; i < SIZE; i++)
    {
        if (data_list[i] == element)
        {
            printf("%d", i);
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}

/* Output:
20 30 40 50 60
55
Element not found

25 50 75 100 125
100
3
*/
