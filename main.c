#include <stdio.h>

int main(void) {
  int a, b, GCD = 1, LCM = 0;
  printf("Input number 1:");
  scanf("%d", &a);
  printf("Input number 2:");
  scanf("%d", &b);
  for (int i = 1; i <= a + b; i++) {
    if (a % i == 0 && b % i == 0) {
      GCD = i;
    }
  }
  printf("GCD of %d and %d is %d\n", a, b, GCD);
  LCM = (a * b) / GCD;
  printf("LCM of %d and %d is %d\n", a, b, LCM);
  return 0;
}