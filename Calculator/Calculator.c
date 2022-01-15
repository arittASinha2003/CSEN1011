#include <stdio.h>
int main() {
  char op;
  int a, b;
  printf("Enter an operator (+, -, *, /, %): ");
  scanf("%c", &op);
  
  printf("Enter 1st number: ");
  scanf("%d", &a);
  
  printf("Enter 2nd number: ");
  scanf("%d", &b);
  
  //printf("Enter two numbers: ");
  //scanf("%d %d", &a, &b);

  switch (op) {
    case '+':
      printf("%d + %d = %d", a, b, a + b);
      //printf("%d", a + b);
      break;
    case '-':
      printf("%d - %d = %d", a, b, a - b);
      //printf("%d", a - b);
      break;
    case '*':
      printf("%d * %d = %d", a, b, a * b);
      //printf("%d", a * b);
      break;
    case '/':
      printf("%d / %d = %d", a, b, a / b);
      //printf("%d", a / b);
      break;
    case '%':
      printf("%d %% %d = %d", a, b, a % b);
      //printf("%d", a % b);
      break;
    default:
      printf("Error! Invalid operator");
  }

  return 0;
}
