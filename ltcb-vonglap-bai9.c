#include<stdio.h>

int tich(int n){
    int i;
    long long t = 1;
	for(i = 1;i <= n;i++){
	t *= i;
	}
	return t;

}

int main(){
	int i,n;
	double s = 1.0;
	
	printf("Nhap so nguyen duong n:");
	scanf("%d",&n);
	
	for(i = 2;i <= n;i++){
		s += 1.0 / tich(i);
	}
	printf("S = %lf",s);
	
	return 0;
	
}
