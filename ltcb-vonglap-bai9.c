#include <stdio.h>

// tinh giai thua
long long giaiThua(int n) {
    long long tich = 1;
    for (int i = 2; i <= n; i++) {
        tich *= i;
    }
    return tich;
}

// tinh tong
double tongDay(int n) {
    double tong = 1.0; 
    for (int i = 2; i <= n; i++) {
        tong += 1.0 / giaiThua(i);
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap gia tri cua  n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap n >= 0\n");
        return 1;
    }

    double kqua = tongDay(n);
    printf("S = %.2f", kqua);

    return 0;
}

