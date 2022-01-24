/* Algorithm:
1. Start
2. Accept 'n'
3. Assign a = 0, b = 1 (First two terms of the fibonacci)
4. If n = 1 display a, else if n = 2 display b, Else proceed to step 5.
5. c = a + b, a = b, b = C
6. Display c 
7. Stop */

# include <stdio.h>
int main(void) {
  int n, t1 = 0, t2 = 1, c, i;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  
  //if (n == 0)
    //printf("%d\n", n);
  if (n == 1)
    printf("%d\n", t1);
  else if (n == 2)
    printf("%d\n", t2);
  else {
    for (i = 1; i<= (n-2); i++){
      c = t1 + t2;
      t1 = t2;
      t2 = c;
    }
    printf("%d\n", c);
  }
  return 0;
}

/* Output:
Enter the value of n: 1
0

Enter the value of n: 2
1

Enter the value of n: 3
1

Enter the value of n: 4
2

Enter the value of n: 10
34
*/
