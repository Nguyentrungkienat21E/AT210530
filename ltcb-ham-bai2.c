#include<stdio.h>

int giaiThua(int n){
	int i,*pn,tich = 1;
	pn = &n;
	
	for(i = 1;i <= n;i++){
		tich *= i;
	}
	return tich;
}
int main(){
	int i,n,*pn;
	pn = &n;
	
	printf("Nhap n : ");
	scanf("%d",pn);
	
	printf("%d! = %d",*pn,giaiThua(n));
}

