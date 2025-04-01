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
void inMang(int a[],int n)
{
    for(int i = 0;i < n;i++)
        printf("%d ",a[i]);
}
void funcDoi(int a[],int n)
{
    int i;
    for(i = 0;i < n;i++)
    {
    if(a[i] < 0)
        a[i] = 0;
    printf("%d ",a[i]);
    }
    

}
int main()
{
    int arr[MAX];
    int n;
    printf("Nhap n:");
    scanf("%d",&n);

    nhapMang(arr,n);
    printf("Cac value trong array truoc khi thay doi : ");
    inMang(arr,n);
    printf("\nCac value trong array sau khi thay doi : ");
    funcDoi(arr,n);

}