/* We are given a list of integers where: the integers are in the range 1..n
The list has a length of n+1 These properties mean the list must have at least 1 duplicate.

Write a C program to identify the duplicate.

Note: For the purpose of auto-grading the input should be like
5
1
2
3
4
2
where the first line contains the number of elements in the list and the rest contain the elements. From these elements identify the duplicate.
Output should be 2 for the above example. */

#include<stdio.h>
int main()
{
    int a, b, c, d;
    
    scanf("%d", &a);
    
    int f[a];
    int j = 0, i = 0;
    
    while (j < a)
    {
        scanf("%d", &f[j]);
    j += 1;
    }
    
    d = 1;
    
    while (i < a)
    {
        int k = d;
        for (k; k < a; k++)
        {
            if (f[i] == f[k])
            {
                printf("%d", f[i]);
                return 0;
            }
        }
        d += 1;
        i += 1;
    }
}

/* Output:
5
1 3 2 3 4
3

6
1 3 2 3 2 4
3

6
1 2 3 2 3 4
2

6
1 2 3 2 3 2
2

6
1 3 2 3 2 2
3
*/

/* OTHER WAY
# include <stdio.h>
# define SIZE 10

int list[SIZE];
int list_size;

void sort(void){
  for(int i=0; i<list_size; i++)
    for(int j=i; j<list_size; j++)
      if (list[i] > list[j]) {
        int temp = list[j];
        list[j] = list[i];
        list[i] = temp;
      }
}

int main(void){
  printf("Enter the number of elements in the list: ");
  scanf("%d", &list_size);
  printf("Enter the elements... ");
  for(int i=0; i<list_size; i++)
    scanf("%d", &list[i]);
  sort();  
  for(int i=0; i<list_size-1; i++)
    if (list[i] == list[i+1]){
      printf("The duplicate element is %d\n", i+1);
      return 0;
    }
}
*/

/* Output:
Enter the number of elements in the list: 6
Enter the elements... 1 3 2 3 2 4
The duplicate element is 2

Enter the number of elements in the list: 6
Enter the elements... 1 3 2 3 2 2
The duplicate element is 2
*/
