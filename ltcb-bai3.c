#include<stdio.h>
#include<conio.h>

int main(){
	float a,b;
	
	printf("Nhap gia tri cua a va b : ");
	scanf("%f%f",&a,&b);
	
	printf(" %f + %f = %f\n",a,b,a + b);
	printf(" %f - %f = %f\n",a,b,a - b);
	printf(" %f * %f = %f\n ",a,b,a * b);
    printf(" %f / %f = %.1f",a,b, a / b);
   
	getch();
}
