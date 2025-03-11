#include <stdio.h>

int soHHao(int n) {
    int i,tong = 1;
    
    for(i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            tong += i;
            if (i != n / i) {
                tong += n / i;
            }
        }
    }
    return tong;
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    
    if (soHHao(n) == n && n != 1) {
        printf("%d là so hoan hao.\n", n);
    } else {
        printf("%d khong phai là so hoan hao.\n", n);
    }
    
}

