#include<stdio.h>

int main(){
	int i,n,tich=1;
	
	printf("Nhap vao gia tri cua n : ");
	scanf("%d",&n);
	
	for(i = 2 ; i <= n ; i++){
		tich = tich * i;
	}
	printf("%d! = %d",n,tich);
}

