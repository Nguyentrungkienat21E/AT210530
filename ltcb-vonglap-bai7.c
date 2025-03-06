#include<stdio.h>

int main(){
	int i,n;
	float tong = 0;
	
	printf("Nhap gia tri cua n : ");
	scanf("%d",&n);
	
	for(i = 1;i <= n;i++){
		tong += 1.0 / i;
	}
	printf("Tong = %.2f ",tong);
}

