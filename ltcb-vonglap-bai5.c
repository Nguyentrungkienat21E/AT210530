#include<stdio.h>
#include<conio.h>

int main(){
	int i,n;
	
	printf("Nhap vao gia tri cua n : ");
	scanf("%d",&n);
	
	printf("Cac uoc cua %d la : ",n);
	
	for(i = 1;i <= n;i++){
		if(n % i == 0){
			printf(" %d ",i);
		}
	} 
	
	
	getch();
}
