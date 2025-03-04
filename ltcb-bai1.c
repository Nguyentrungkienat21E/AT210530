#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int n;
	
	printf("Nhap gia tri n : ");
	scanf("%d",&n);
	
	int binhphuong = pow(n,2),nmu3 = pow(n,3),nmu4 = pow(n,4);
	
	printf("Binh phuong cua n la %d \n",binhphuong);
	printf("n mu ba la %d \n",nmu3);
	printf("n mu bon la %d ",nmu4);
	
	getch();
	
}
