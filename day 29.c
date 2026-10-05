/*Q57. Sum of Array Elements*/
#include <stdio.h>

int main() {
    int a[100], n, i, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%d", sum);

    return 0;
}




/*Q58. Maximum and Minimum Element*/
#include <stdio.h>

int main() {
    int a[100], n, i, max, min;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}