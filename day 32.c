/*Q63. Merge Two Arrays*/
#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i;

    scanf("%d", &n1);

    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    scanf("%d", &n2);

    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1; i++)
        c[i] = a[i];

    for (i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    for (i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}




/*Q64. Digit Occurring Most Times*/
#include <stdio.h>

int main() {
    long long n;
    int count[10] = {0};
    int digit, i, max = 0, result = 0;

    scanf("%lld", &n);

    if (n == 0)
        count[0]++;

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}