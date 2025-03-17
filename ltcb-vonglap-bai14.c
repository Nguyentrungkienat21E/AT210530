/*
Mo ta thuat toan
Nhap GDP nam 2014 va toc do tang truong.
Chuyen toc do tang truong (%) thanh he so nhan.
Vi du: 10% --> 1.10
Dung vong lap tinh GDP tung nam, cap nhat gia tri GDP.
Dung khi GDP vuot gap doi GDP nam 2014.
In ket qua ra man hinh.
*/

#include<stdio.h>

int main(){
	double gdp_2014,tangGdp,gdp;
	int nam = 2014;
	
	printf("Nhap GDP nam 2014(USD):");
	scanf("%lf",&gdp_2014);
	printf("Nhap toc do tang truong:");
	scanf("%lf",&tangGdp);
	
	//Chuyen doi toc do tang truong (%) thanh he so nhan 
	tangGdp = 1 + (tangGdp / 100) ;
	
	//gan 
	gdp = gdp_2014;
	
	//in bang nhu ycdb
	
	printf("\n%-10s%-10s\n","Nam","GDP(USD)");
	
	while(gdp <= 2 * gdp_2014){
       printf("%-10d%-10.2lf\n",nam,gdp);
	   gdp *= tangGdp;
	   nam++;
	}
	
	
	
}
