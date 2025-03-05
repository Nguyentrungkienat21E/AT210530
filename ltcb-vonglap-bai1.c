#include<stdio.h>
#include<conio.h>

int main(){
	
	int x[10];
	int i,tong = 0;
	
	printf("Nhap vao 10 so nguyen:\n");
	
	for (i = 0;i < 10; i++){
		printf("Nhap so thu %d : ",i+1);
		scanf("%d",&x[i]);
		tong = tong +x[i];
    }
    printf("Tong cua 10 so nguyen la : %d",tong);
	
	getch();
}
