#include<stdio.h>

int main(){
	int n;
	
	printf("Nhap vao gia tri n cua ban : ");
	scanf("%d",&n);
	
	if(n >= 0 && n <= 10){
	    if(n < 5){
		printf("Yeu");
	}
	    else if(n >= 5 && n < 7){
		printf("Trung Binh");
	}
	    else if(n >= 7 && n < 8){
		printf("Kha");
	}
	    else if(n >= 8 && n < 9){
		printf("Gioi");
	}
	    else{
		printf("Xuat Sac");
	}
}
    else{
    	printf("Diem so cua ban nhap vao khong dung , ban hay nhap lai");
	}
}
