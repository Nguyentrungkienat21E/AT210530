#include<stdio.h>

    long long dayFibonacci(int n){
	int i;
	
	   if(n == 1 || n == 2){
		return 1;
	   }   
	
	long long a = 1,b = 1 , tong ;
	for(i = 3;i <= n;i++){
		tong = a + b;
		a = b;
		b = tong;
	}
	return tong;
	
    }
int main(){
	int n;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	
	if(n <= 0){
		printf("Gia tri n khong phu hop bai toan , ban phai nhap n lon hon 0!");
		return 1;
	}
	printf("So hang thu %d cua day Fibonacci la %d",n,dayFibonacci(n));
	
	return 0;
	
}
