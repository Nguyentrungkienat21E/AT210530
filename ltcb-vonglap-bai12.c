#include <stdio.h>
#include <math.h>
#include<conio.h>

// Ham tinh giai thua 
long long giaiThua(int n) {
    long long tich = 1;
    int i;
    for (i = 1; i <= n; i++) {
        tich *= i;
    }
    return tich;
}

int main() {
    int i = 0;
    double x, eps, S, Sin = 0.0;

    // Nhap gia tri x va do chinh xac eps
    printf("Nhap x(do) và eps: ");
    scanf("%lf %lf", &x, &eps);

    // Doi don vi cua x
    x = x * M_PI / 180.0;// M_PI do chinh xac cao hon 3.14

    // Tinh sin
    do {
        S = pow(-1, i) * (pow(x, 2 * i + 1) / giaiThua(2 * i + 1));
        Sin += S;
        i++;
    } 
	while (fabs(S) > eps);

    printf("sin(%.6lf) = %.6lf\n", x, Sin);
    
    getch();
    return 0;
}

