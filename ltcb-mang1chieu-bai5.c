#include<stdio.h>
#include<stdlib.h>
#define MAX 1000
#define true 1 
#define false 0

void nhapMang(int a[],int n)
{
    for(int i = 0;i < n;i++)
       scanf("%d",&a[i]);
}
int solan(int a[],int n,int value)
{   
    int dem = 0;
    for(int i = 0;i < n;i++)
        if(a[i] == value)
            dem++;
    printf("So lan xuat hien cua %d trong array la %d",value,dem);

}
int main()
{
    int arr[MAX];
    int n,value;

    printf("Nhap n:");
    scanf("%d",&n);

    nhapMang(arr,n);

    printf("Nhap value:");
    scanf("%d",&value);

    solan(arr,n,value);
}