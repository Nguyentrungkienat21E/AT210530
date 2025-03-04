//thang co 31 day ; 1 3 5 7 8 10 12 , thang co 30 day : 4 6 9 11 

#include<stdio.h>
#include<conio.h>

    
		
	// tra ve so thang trong nam 
    int songaytrongThang(int thang , int nam){
    	
    	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
    		return 31;
		}
		else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){ 
		    return 30;
		}
		else if(thang == 2){
			if(nam % 400 == 0 || nam % 4 == 0 & nam % 100 != 0){
				return 29;
			}
			else{
				return 28;
			}
		}
		else{
			return -1; //thang khong dung
		}
		
	}
    int main(){
		int thang,nam,soNgay;
		
		printf("Nhap vao thang va nam cua ban : ");
		scanf("%d%d",&thang,&nam);
		soNgay = songaytrongThang(thang,nam);
		
		if(soNgay != 0){
			printf("Thang %d nam %d co %d ngay",thang,nam,soNgay);
		}
		else{
			printf("Thang khong hop le");
		}

	getch();
	}
