/*Q61. Linear Search*/
#include <stdio.h>

int main() {
    int a[100], n, i, key, position = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            position = i;
            break;
        }
    }

    if (position != -1)
        printf("Found at index %d", position);
    else
        printf("-1");

    return 0;
}





/*Q62. Reverse Array Without Extra Space*/
#include <stdio.h>

int main() {
    int a[100], n, i, temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}