#include <stdio.h>
#include <stdlib.h>

int main() {
    int dong, cot;
    FILE *tep;

    printf("Nhap so dong: ");
    scanf("%d", &dong);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    int **A = (int **)malloc(dong * sizeof(int *));
    int **B = (int **)malloc(dong * sizeof(int *));
    int **C = (int **)malloc(dong * sizeof(int *));
    for (int i = 0; i < dong; i++) {
        A[i] = (int *)malloc(cot * sizeof(int));
        B[i] = (int *)malloc(cot * sizeof(int));
        C[i] = (int *)malloc(cot * sizeof(int));
    }

    printf("Nhap ma tran A:\n");
    for (int i = 0; i < dong; i++)
        for (int j = 0; j < cot; j++)
            scanf("%d", &A[i][j]);

    printf("Nhap ma tran B:\n");
    for (int i = 0; i < dong; i++)
        for (int j = 0; j < cot; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < dong; i++)
        for (int j = 0; j < cot; j++)
            C[i][j] = A[i][j] + B[i][j];

    tep = fopen("CONG_MT.C", "w");
    if (tep == NULL) {
        printf("Khong mo duoc tep.\n");
        return 1;
    }

    fprintf(tep, "Ma tran A:\n");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++)
            fprintf(tep, "%d ", A[i][j]);
        fprintf(tep, "\n");
    }

    fprintf(tep, "Ma tran B:\n");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++)
            fprintf(tep, "%d ", B[i][j]);
        fprintf(tep, "\n");
    }

    fprintf(tep, "Ma tran C = A + B:\n");
    for (int i = 0; i < dong; i++) {
        for (int j = 0; j < cot; j++)
            fprintf(tep, "%d ", C[i][j]);
        fprintf(tep, "\n");
    }

    fclose(tep);

    for (int i = 0; i < dong; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
