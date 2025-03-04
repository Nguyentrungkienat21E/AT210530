#include<stdio.h>
#include<conio.h>

int main(){
	float a,b,c,d,e,f;
	
	printf("Nhap vao gia tri cua a,b,c : ");
	scanf("%f%f%f",&a,&b,&c);
	printf("Nhap vao gia tri cua d,e,f : ");
	scanf("%f%f%f",&d,&e,&f);
	
	float D,Dx,Dy,x,y;
	
	D = a * e - b * d;
	Dx = c * e - b * f;
	Dy = a * f - c * d;
	
	if(D == 0){
		if(Dx == 0 && Dy == 0){
			printf("Phuong trinh co vo so nghiem");
		}
		else{
			printf("Phuong trinh vo nghiem");
		}
	}
	else{
		x = Dx / D ;
		y = Dy / D ;
		printf("He phuong trinh co nghiem la %.2f va %.2f ",x,y);
	}
	
	getch();
}
