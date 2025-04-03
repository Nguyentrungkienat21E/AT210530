#include<stdio.h>

long long dayFibonacci(int n){
	int i;
	
	if(n == 1 || n == 2){
		return 1;
	}
	long long tong,a = 1,b = 1;
	for(i = 3;i <= n;i++){
		tong = a + b;
		a = b;
		b = tong ;
	}
	return tong;
}
int main(){
		int n,*pn;
		pn = &n;
		
		printf("Nhap gia tri cua n: ");
		scanf("%d",pn);
		
		if(n <= 0){
			printf("n khong hop le.Hay nhap lai!");
			return 1;
		}
		printf("So hang thu %lld cua day Fibonacci la %ld",*pn,dayFibonacci(n));
		return 0;
}
	
