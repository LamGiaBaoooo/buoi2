#include <stdio.h>
#include <math.h>

int kiemTraSoChinhPhuong(int n) {
  // Kiểm tra xem n có phải là số chính phương hay không
  int canBacHai = sqrt(n);
  return canBacHai * canBacHai == n;
}

int demSoChinhPhuong(int n) {
  // Đếm số lượng số chính phương nhỏ hơn n
  int soLuong = 0;
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoChinhPhuong(i)) {
      soLuong++;
    }
  }
  return soLuong;
}

int main() {
  int n;
  printf("Nhap so nguyen duong n: ");
  scanf("%d", &n);

  // Đếm số lượng số chính phương nhỏ hơn n
  int soLuongSoChinhPhuong = demSoChinhPhuong(n);

  // In ra số lượng và danh sách các số chính phương
  printf("So luong so chinh phuong nho hon %d la: %d\n", n, soLuongSoChinhPhuong);
  printf("Danh sach cac so chinh phuong nho hon %d la: ", n);
  for (int i = 1; i <= n; i++) {
    if (kiemTraSoChinhPhuong(i)) {
      printf("%d ", i);
    }
  }

  return 0;
}
