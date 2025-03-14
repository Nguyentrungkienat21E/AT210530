#include<stdio.h>
#include<math.h>
#include<conio.h>

//Tinh giai thua
long long giaiThua(int n){
	int i;
	long long tich = 1;
	for(i = 1;i <= n;i++){
		tich *= i;
	}
	return tich;
}

int main(){
	int i = 0;
	double x,eps,S,Ex=0.0;
	
	//Nhap x va do chinh xac eps
	printf("Nhap x , eps: ");
	scanf("%lf %lf",&x,&eps);
	
	//Kiem tra nhap eps am hay duong neu am or =0--> nhap lai
	
	if(eps <= 0){
		printf("eps khong hop le , ban hay nhap lai!");
		return;
	}
	
	// Tinh e mu x
	
	do{
		S = pow(x,i) / giaiThua(i);
		Ex += S;
		i++;
	}
	while(fabs(S) >= eps);
	
	printf("e mu %lf = %lf",x,Ex);
	
	getch();
	return 0;
	
}
