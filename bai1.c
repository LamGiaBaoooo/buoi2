
#include <stdio.h>

void inBoi7(int n) {
  // In ra các bội của 7 từ 10 đến n
  for (int i = 10; i <= n; i++) {
    if (i % 7 == 0) {
      printf("%d ", i);
    }
  }
}

int main() {
  int n;
  printf("Nhap so nguyen n: ");
  scanf("%d", &n);

  printf("Cac so nguyen co 2 chu so la boi cua 7 la: ");
  inBoi7(n);

  return 0;
}