/* Algorithm:
1. Start
2. Accept 'n'.
3. Repeat the steps until n == 1.
4. If n is even then [n = n/2], else [n = 3*n + 1]
5. Make a count of how many times the loop is repeated.
6. Display count.
7. Stop. */

# include <stdio.h>
int main(void) {
  int n, count = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  do {
    if (n % 2 == 0)
      n /= 2;
    else
      n = (3 * n) + 1;
    count++;
  } while(n != 1);
  printf("Number of terms in the collatz sequence is %d\n", count+1);
  return 0;
}

/* Output
Enter a number: 12
Number of terms in the collatz sequence is 10

Learnings:
01. Do while loop */

/* For printing Collatz Sequence:
#include<stdio.h>
int main(){
  int n;
  
  printf("Enter a number: ");
  scanf("%d", &n);
  
  while(n > 1){
    if(n % 2 == 0){ //for even numbers
      n = n / 2;
      printf("%d ", n);
    }
    else{ //for odd numbers
      n = n * 3 + 1;
      printf("%d ", n);
    }
  }
  return 0;
}
*/

/* Output:
Enter a number: 12
6 3 10 5 16 8 4 2 1 
*/
