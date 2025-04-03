#include<stdio.h>

int main(){
	int i,a[10];
	int *pa = a;
	
	for(i = 0;i < 10;i++){
		*(pa + i) = i +1;
		printf("%d ",*(pa + i));

	}
	
}
