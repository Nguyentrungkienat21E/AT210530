#include <stdio.h>

void nhapArr(int *a, int n) {
    for (int i = 0; i < n; i++)
        scanf("%d", (a + i));
}

void inArr(int *a, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
}

void sapXepArr(int *a, int n) {
    for (int i = 0; i < n; i++) {
        int *min = a + i;
        for (int *j = a + i + 1; j < a + n; j++)
            if (*j < *min) min = j;
        if (min != a + i) {
            int temp = *min;
            *min = *(a + i);
            *(a + i) = temp;
        }
    }
}

int main() {
    int arr[1000], n;

    printf("Nhap n: ");
    scanf("%d", &n);

    nhapArr(arr, n);
    printf("Array ban dau la: ");
    inArr(arr, n);
    sapXepArr(arr, n);
    printf("\nArray sau khi sap xep: ");
    inArr(arr, n);

    return 0;
}
