#include<stdio.h>
#include<stdlib.h>
int findmaxmin(int a[],int n)
{
    int max = a[0],min = a[0];
    int vitrimax,vitrimin;
    for(int i = 0; i < n;i++)
    {
        if(max < a[i]) 
        {
            max = a[i];
            vitrimax = i + 1;
        }
        if(min > a[i]) 
        {
            min = a[i];
            vitrimin = i + 1;
        }
    }

    printf("Value max trong array la %d va dung thu %d trong array",max,vitrimax);
    printf("\nValue min trong array la %d va dung thu %d trong array",min,vitrimin);

}


void nhapMang(int a[],int n)
{
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int n,arr[1000];

    printf("Nhap n:");
    scanf("%d",&n);

    nhapMang(arr,n);
    findmaxmin(arr,n);
    
}