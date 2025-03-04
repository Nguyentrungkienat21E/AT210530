#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main(){
	float r,S,V;
	
	printf("Nhap ban kinh cua hinh cau : ");
	scanf("%f",&r);
	
	S = 4 * PI * r * r;
	V = 4 / 3 * PI * r * r * r;
	
	printf("Dien tich cua hinh cau la %.2f \n",S);
	printf("The tich cua hinh cau la %.2f ",V);
	
	getch();
}
