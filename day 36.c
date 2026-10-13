/*Q71. Read and Print Matrix*/
#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++)
            printf("%d ", a[i][j]);

        printf("\n");
    }

    return 0;
}





/*Q72. Sum of All Matrix Elements*/
#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, sum = 0;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}