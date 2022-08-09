#include <stdio.h>
void lc(int x, int y){
  int a, b, t, gcd, lcm;
  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }

  gcd = a;
  lcm = (x*y)/gcd;

  printf("Highest common divisor of %d and %d = %d\n", x, y, gcd);
  printf("Lowest common multiple of %d and %d = %d\n", x, y, lcm);

}

int main() {
  int a, b, x, y, t, gcd, lcm;

  printf("Enter first integer :");
  scanf("%d", &x);
  printf("Enter second integer :");
  scanf("%d", &y);


  lc(x, y);

  return 0;
}