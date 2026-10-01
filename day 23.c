/*Q45. Sum of Series*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4 * i - 1);
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}


/*Q46. Print 5 × 5 Star Pattern*/
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}