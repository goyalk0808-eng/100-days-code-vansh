/*Q75. Add Two Matrices*/
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j;

    scanf("%d %d", &r, &col);

    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++) {
        for (j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}




/*Q76. Check Symmetric Matrix*/
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, symmetric = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("Symmetric");
    else
        printf("Not Symmetric");

    return 0;
}