#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

void nhapMang(int a[],int n)
{
    for(int i = 0;i < n;i++)
        scanf("%d",&a[i]);
    printf("\n");
    }

int funcmath(int a[],int n)
{   
    int tong1 = 0; //tong1 la tong cac value trong array
    for(int i = 0;i < n;i++)
       tong1 += a[i];

    printf("Tong cac value trong array = %d\n",tong1);

    int tong2 = 0,tong3 = 0;//tong2 am,tong3 duong
    int demAm = 0,demDuong = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] < 0)
        {
            tong2 += a[i];
            demAm++;
        }
        else if(a[i] > 0)
        {
            tong3 += a[i];
            demDuong++;
        }
    }
    printf("Tong cac value am trong array = %d\n",tong2);
    printf("Tong cac value duong trong array = %d\n",tong3);

    float TBC1 ,TBC2 ,TBC3 ;
    //TBC1 la TBC ca arrray
    //TBC2 la TBC cac value am
    //TBC3 la TBC cac value duong
    TBC1 = tong1 / n;

    if(demAm > 0 )
    {
        TBC2 = (float)tong2 / demAm;
    }
    else TBC2 = 0;

    if(demDuong > 0)
    {
        TBC3 = (float)tong3 / demDuong;
    }
    else TBC3 = 0;
    printf("TBC cac value trong array = %.2f\n",TBC1);
    printf("TBC cac value am trong array = %.2f\n",TBC2);
    printf("TBC cac value duong trong array = %.2f",TBC3);
}

int main()
{   
    int arr[MAX];
    int n;

    printf("Nhap n:");
    scanf("%d",&n);

    nhapMang(arr,n);
    funcmath(arr,n);
    
    return 0;
}

