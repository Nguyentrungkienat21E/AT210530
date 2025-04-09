#include <stdio.h>
#include <stdlib.h>

void inMaTran(int n, int maTran[n][n])
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j;
    int n;
    int dem = 1;
    int vong = 0;

    printf("Nhap kich thuoc ma tran vuong: n = ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Kich thuoc ma tran phai lon hon 0.\n");
        return 1;
    }

    int maTran[n][n];

    while (dem <= n * n)
    {
        for (j = vong; j < n - vong && dem <= n * n; j++)
        {
            maTran[vong][j] = dem++;
        }
        for (i = vong + 1; i < n - vong && dem <= n * n; i++)
        {
            maTran[i][n - vong - 1] = dem++;
        }
        for (j = n - vong - 2; j >= vong && dem <= n * n; j--)
        {
            maTran[n - vong - 1][j] = dem++;
        }
        for (i = n - vong - 2; i > vong && dem <= n * n; i--)
        {
            maTran[i][vong] = dem++;
        }
        vong++;
    }

    printf("Ma tran xoan oc:\n");
    inMaTran(n, maTran);
    printf("voi n = %d\n", n);

    return 0;
}
