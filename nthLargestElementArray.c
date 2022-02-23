// Given an array of integers, return the nth largest element.
// Hint: Sort the array

# include <stdio.h>
# define SIZE 10

int main (void)
{
    int array[SIZE];
    int n; // nth element
    
    for (int index = 0; index < SIZE; index++)
      scanf("%d", &array[index]);
    scanf("%d", &n); 
    
    //Complete the rest of code as per the question asked
    
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("%d", array[SIZE - n]);
    return 0;
}

/* Output:
1 2 9 10 3 4 5 7 6 8 4
7

35 6 9 7 2 1 5 14 20 17 10
1
*/
