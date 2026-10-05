/*Q55. Prime Numbers from 1 to n*/
#include <stdio.h>

int main() {
    int n, i, j, flag;

    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        flag = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag)
            printf("%d ", i);
    }

    return 0;
}





/*Q56. Read and Print 1D Array*/
#include <stdio.h>

int main() {
    int a[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}