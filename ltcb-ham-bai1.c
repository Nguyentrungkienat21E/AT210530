#include<stdio.h>
#include<math.h>

int luyThua(int x,int y){
	int *px ,*py ;
	px = &x;
	py = &y;
	int kq;
	kq = pow(x,y);
	return kq;
}
int main(){
	int x,y,kQ,*px,*py;
	px = &x;
	py = &y;
	
	printf("Nhap gia tri cua x,y:");
	scanf("%d%d",px,py);
    kQ = luyThua(x,y);
    
    printf("%d mu %d = %d",*px,*py,kQ);
	
}
