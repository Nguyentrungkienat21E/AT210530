#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,dienTich,p;
	
	printf("Nhap vao gia tri cua a,b,c : ");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a + b > c && a + c > b && b + c > a){
		p =( a + b + c ) / 2;
	    dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
		if(a==b || a==c || b==c){
			printf("Ba so tao thanh tam giac can va co chu vi = %.2f , dien tich = %.2f",p *2,dienTich);
		}
		else if(a==b && a==c && b==c){
			printf("Ba so tao thanh tam giac deu va co chu vi = %.2f , dien tich = %.2f",p *2,dienTich);	
		}
		else if(a * a == b * b+ c *c || b * b == a * a+c * c || c * c == a * a+b * b){
			printf("Ba so tao thanh tam giac vuong va co chu vi = %.2f , dien tich = %.2f",p *2,dienTich);
		}
		else if(a * a == b * b+c * c && b==c || b * b == a * a+c * c && a==c || c * c == a * a+b * b && a==b){
			printf("Ba so tao thanh tam giac vuong can va co chu vi = %.2f , dien tich = %.2f",p *2,dienTich);
		}
		else{
			printf("Ba so tao thanh tam giac thuong va co chu vi = %.2f , dien tich = %.2f",p *2,dienTich);
		}
	}
	else{
		printf("Ba so nhap vao khong tao thanh tam giac");
	}

	
}
