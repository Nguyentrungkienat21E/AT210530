#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,delta;
	
	printf("Nhap vao gia tri cua a,b,c : ");
	scanf("%f%f%f",&a,&b,&c);
	
	float x1,x2,x3;
	
	if(a==0){
		if(b == 0 && c == 0){
			 printf("Phuong trinh co vo so nghiem");
		}
		else{
			x3 = -c / b;
			printf("Phuong trinh co nghiem la %.2f",x3);
		}
	}
	else{
		delta = b * b - 4 * a * c;
		if(delta >= 0){
		  x1 = (-b + sqrt(delta)) / (2 * a);
	      x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Phuong trinh co hai nghiem la %.2f va %.2f",x1,x2);
		}
		else{
			printf("Phuong trinh vo nghiem ");
		}
	}
	

}
