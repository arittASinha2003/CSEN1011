/* C Program to find the product of two complex numbers using structures. */

# include <stdio.h>

struct complex_number {
  int real, imaginary;
};

int main(void) {
  struct complex_number c1, c2, c3;
  
  scanf("%d", &c1.real);
  scanf("%d", &c1.imaginary);
  
  scanf("%d", &c2.real);
  scanf("%d", &c2.imaginary);

  // write your code here
  
  c3.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
  c3.imaginary = c1.imaginary * c2.real + c1.real * c2.imaginary;

  printf("%d %d", c3.real, c3.imaginary);
  return 0;
}

/* Output:
2 3 4 5
-7 22

2 0 4 0
8 0
*/
