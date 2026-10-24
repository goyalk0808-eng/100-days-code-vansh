
#include <stdio.h>

int main() {
    int n, x;
    int arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            index = i;
            break;
        }
    }

    printf("%d\n", index);

    return 0;
}
