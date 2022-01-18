// Write a C program for the following problem.

/* For a given array  of sorted integers, find the ceiling of a number n in the array.
If the ceiling number is not there, output the last element of the sorted list.
If the number n is already in the sorted list, output the number itself.

For example consider the sorted array as [12, 30, 43, 65, 74, 81, 96]
If n = 15, output should be 30 
If n = 97, output should be 96
if n = 65, output should be 65

Note: For the purpose of autograding, the first input should be the number of terms followed by the integers of the array in sorted order. The last input should be the number n.
*/
#include<stdio.h>
int main()
{
    int w, x, y, z;
    
    scanf("%d", &w);
    
    int f[w];
    int i = 0;
    
    while (i < w)
    {
        scanf("%d", &f[i]);
        i += 1;
    }
    scanf("%d", &x);
    i = 0;
    
    while (i < w)
    {
        if (f[i] == x)
        {
            printf("%d", x);
            return 0;
        }
        else if (x >= f[w-1])
        {
            printf("%d", f[w-1]);
            return 0;
        }
        else if (x < f[0])
        {
            printf("%d", f[0]);
            return 0;
        }
        else if (x > f[i] && x < f[i + 1])
        {
            printf("%d", f[i + 1]);
            return 0;
        }
        i += 1;
    }
}

/* Output:
5
15 30 45 60 75
50
60
*/

/* OTHER WAY
#include <stdio.h>
#define SIZE 10
int main()
{
  int sorted_array[SIZE];
  int n, terms, i = 0;
  
  printf("Ënter the number of terms in the array: ");
  scanf("%d", &terms);

  printf("Enter the numbers:\n");
  for(i=0; i<terms; i++)
    scanf("%d", &sorted_array[i]);
  
  printf("Enter the number to find its ceiling: ");
  scanf("%d", &n);
  
  for (i = 0; i < terms; i++)
  {
    if (n <= sorted_array[i])
    {
        printf("The ceiling of the given number is %d\n", sorted_array[i]);
        return 0;
    }
  }      
  printf("The ceiling of the given number is %d\n", sorted_array[i-1]);
  return 0;
}
*/

/* Output:
Ënter the number of terms in the array: 5
Enter the numbers:
15 30 45 60 75
Enter the number to find its ceiling: 50
The ceiling of the given number is 60
*/
