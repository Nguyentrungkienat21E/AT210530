#include<stdio.h>

void nhi_phan(int n)
{
    int heHai[32],i = 0;
    while(n > 0)
    {
        heHai[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j = i - 1;j >= 0;j--)
        printf("%d",heHai[j]);
}

void bat_phan(int n)
{
    int heTam[32],i = 0;
    while(n > 0)
    {
        heTam[i] = n % 8;
        n = n / 8;
        i++;
    }
    for(int j = i - 1;j >= 0;j--)
        printf("%d",heTam[j]);
}

void thap_luc_phan(int n)
{
    int du,i = 0;
    char he16[32];
    while(n > 0)
    {
        du = n % 16;
        if(du < 10) he16[i] = du + '0';
        else he16[i] = du - 10 + 'A';
        n = n / 16;
        i++;
    }
    for(int j = i - 1;j >= 0;j--)
        printf("%c",he16[j]);
}

int main()
{
    int n;
    printf("Nhap so nguyen duong n : ");
    scanf("%d",&n);

    if(n == 0) printf("%d doi tu he 10 sang cac he 2,8,16 la : 0",n);
    else 
    {
        printf("%d doi tu he 10 sang he 2 la :",n);
        nhi_phan(n);
        printf("\n%d doi tu he 10 sang he 8 la :",n);
        bat_phan(n);
        printf("\n%d doi tu he 10 sang he 16 la :",n);
        thap_luc_phan(n);
    }
}