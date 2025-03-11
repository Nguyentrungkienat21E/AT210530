//Tim uoc chung lon nhat , boi chung nho nhat cua hai so nguyen dc nhap tu ban phim
#include<stdio.h>

	
	/* Cach 1 : Dung vong lap for
	
  int UCLN(int a , int b){
  	int min = (a < b) ? a : b; //chon so nho hon
  	int i;
  	for(i = min ;i >= 1;i--){
  		if(a % i == 0 && b % i == 0){
  			return i;//UCLN
		  }
	  }
	  return 1;// a,b chi co uoc chung la 1
  }	
  int BCNN(int a , int b){
  	int max = (a > b) ? a : b;//chon so lon hon
  	int i;
  	for(i = max ; ;i++){
  		if(i % a == 0 && i % b == 0){
  			return i;//BCNN
		  }
	  }
  } */
  
  
  
      /* Cach 2 : Su dung thuat toan Euclid */
    int UCLN(int a , int b){
    	while(b != 0){
    		int x = b;
    		b = a % b ;
    		a = x;
		}
		return a;
	}
	
	int BCNN(int a , int b){
		return (a * b) / UCLN(a,b);
	} 
	
  int main(){

	int a,b;
	
	printf("Nhap a,b nguyen :");
	scanf("%d%d",&a,&b);
	
    printf("Uoc chung lon nhat cua %d va %d la %d ",a,b,UCLN(a,b));
    printf("\nBoi chung nho nhat cua %d va %d la %d",a,b,BCNN(a,b));
}


    

