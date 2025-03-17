#include<stdio.h>
#include<math.h>

int main(){
	int A,n;
	
	printf("Nhap so tien luc gui : ");
	scanf("%d",&A);
	
	printf("Nhap so thang : ");
	scanf("%d",&n);
	
	double tienRut,r = 0.0045;
    tienRut = A * pow(1+r,n);
	
	printf("Sau %d thang nguoi do rut duoc %.2lf",n,tienRut);
	
}
