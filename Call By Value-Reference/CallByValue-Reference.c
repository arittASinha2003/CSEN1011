# include <stdio.h>

void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
  printf("\nInside Swap Function ...\n x = %d, y = %d", x, y);
}

void swap_ref(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int a, b;
  
  printf("Enter the value of a: ");
  scanf("%d",&a);
  
  printf("Enter the value of b: ");
  scanf("%d",&b);
  
  printf("Before Swapping ...\n a = %d, b = %d", a, b);
  swap(a, b);
  printf("\nAfter Swapping ...\n a = %d, b = %d", a, b);
  swap_ref(&a, &b);
  printf("\nAfter Calling swap_ref Function ...\n a = %d, b = %d\n", a, b);
  return 0;
}
