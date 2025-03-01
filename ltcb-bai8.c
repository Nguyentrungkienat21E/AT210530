#include<stdio.h>

int main(){
	int a,b,c,chuVi;
	float dienTich;
	
	printf("Nhap gia tri cua ban : ");
	scanf("%d%d%d",&a,&b,&c);
	
	chuVi = a + b + c ;
	float p = chuVi / 2;
	dienTich = sqrt(p*(p-a)*(p-b)*(p-c));
	
	if(a + b > c || a + c > b || b + c > a){
		printf("a,b,c la ba canh cua mot tam giac \n");
	    printf("Chu vi cua tam giac la %.2f . Dien tich cua tam giac la %.2f \n",chuVi,dienTich);
		
		if(a*a = b*b + c*c || b*b = a*a + c*c || c*c = a*a + b*b){
		    printf("Tam giac do la tam giac vuong ");
		}
		else if(a*a = b*b + c*c && b == c ||b*b = a*a + c*c && a == c ||c*c = a*a + b*b && a == b){
			printf("Tam giac do la tam giac vuong can ");
		}
		else if(a==b && a==c && b==c){
			printf("Tam giac do la tam giac deu");
		}
		else if(a==b || a==c || b==c){
			printf("Tam giac do la tam giac can");
		}
		else{
			printf("Tam giac do la tam giac thuong ");
		}
		}
	}
	else{
		printf("a,b,c khong phai la canh cua tam giac");
	}
	
}
