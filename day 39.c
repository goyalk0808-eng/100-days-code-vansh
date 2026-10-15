/*Q77. Check Diagonal Elements are Distinct*/
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, distinct = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    if (distinct)
        printf("Distinct");
    else
        printf("Not Distinct");

    return 0;
}




/*Q78. Sum of Main Diagonal*/
#include <stdio.h>

int main() {
    int a[10][10], n, i, j, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < n; i++)
        sum += a[i][i];

    printf("%d", sum);

    return 0;
}