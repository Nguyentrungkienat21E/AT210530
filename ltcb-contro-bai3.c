#include <stdio.h>
#include <stdlib.h>

void findMaxMin(int *a, int n) {
    int max = *a, min = *a;

    for (int i = 1; i < n; i++) {
        if (*(a + i) > max) { 
            max = *(a + i);
        }
        if (*(a + i) < min) { 
            min = *(a + i);
        }
    }

    printf("Value max trong array la %d \n", max);
    printf("Value min trong array la %d \n", min);
}

void nhapMang(int *a, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", (a + i));
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Khong du bo nho!\n");
        return 1;
    }

    nhapMang(arr, n);
    findMaxMin(arr, n);

    free(arr);
    return 0;
}
