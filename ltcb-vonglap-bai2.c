#include<stdio.h>
#include<conio.h>

int main(){
	
	int i,n;
	
	printf("Nhap gia tri n cua ban : ");
	scanf("%d",&n);
	
	for(i = 2;i < n;i++){
		if(n % i == 0 ){
			printf("%d khong phai la so nguyen to",n);
			return;
		}
		}
			printf("%d la so nguyen to ",n);
	
	getch();
}
