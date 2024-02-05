#include <stdio.h>

int main()
{
  int num1, num2;
  // first input stored in num1
  // printf("Enter a Number for Addition \n");
  scanf("%d", &num1);
  // second input stored in num2
  // printf("Enter a Second Number for Addition \n");
  scanf("%d", &num2);
  // printf("Your total value is %d \n",num1+num2);
  // num1 is oprand 1 and + sign is oprator and num 2 also a oprand 2

  // Math

  int a = 10, b = 20, c;
  int sum = a + b;

  int multply = a * b;
  int x, y = a * b;

  // valid
  a = b * c;
  a = b * c;
  a = b / c;

  // invalid
  // b+c = a;
  // a = bc;
  // a = b^c;

  // Example

  printf("%d \n", 5 * 2 - 5 * 3);
  printf("%d \n", 5 * (2 / 2) * 3);
  printf("%d \n", 5 * 2 / 2 * 3);
  printf("%d \n", 5 + 2 / 2 * 3);

  return 0;
}