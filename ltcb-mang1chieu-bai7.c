#include<stdio.h>

void nhapArr(int a[],int n)
{
    for(int i = 0;i < n;i++)
        scanf("%d",&a[i]);
}
void inArr(int a[],int n)
{
    for(int i = 0;i < n;i++)
        printf("%d ",a[i]);
}
void sapxepArr(int a[],int n)
{
    int j;
    for(int i = 0;i < n;i++)
    {
        int min = i;
        for(int j = i + 1;j < n;j++)
           if(a[j] < a[min]) min = j;
        if(min != j)
        {
            //swap
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}
int main()
{
    int arr[1000];
    int n;

    printf("Nhap n:");
    scanf("%d",&n);

    nhapArr(arr,n);
    printf("Array ban dau la : ");
    inArr(arr,n);
    sapxepArr(arr,n);
    printf("\nArray sau khi sap xep : ");
    inArr(arr,n);
}