#include<stdio.h>

int main(){
	int a,b,*pa,*pb,x;
	pa = &a;
	pb = &b;
	
	printf("Nhap gia tri cua a va b: ");
	scanf("%d%d",pa,pb);
	
	//hoan doi vi tri cua a va b
	
	x = *pa;
	*pa = *pb;
	*pb = x;
	
	printf("a = %d , b = %d",*pa,*pb);
	
}
