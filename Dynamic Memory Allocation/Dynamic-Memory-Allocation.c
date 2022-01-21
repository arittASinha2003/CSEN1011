# include <stdio.h>
# include <stdlib.h>
int main()
{
  int *ptr; 
  int n;
  printf("Enter the number of integers you want: ");
  scanf("%d", &n);

  ptr = malloc(n * sizeof(*ptr));
  
  printf("Enter %d integers...\n", n);
  
  for (int index=0; index < n; index ++)
      scanf("%d", (ptr + index)); 
  printf("\nThe numbers entered are...\n");
  
  for (int index=0; index < n; index ++)
    printf("%d\t",*(ptr + index));
   printf("\n"); 
   return 0;
}

/* Output:
Enter the number of integers you want: 5
Enter 5 integers...
10 20 30 40 50

The numbers entered are...
10	20	30	40	50	
*/
