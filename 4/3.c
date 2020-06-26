#include <stdio.h>
#include <math.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n = 10;
    int m;
    int numbers[100];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        for (int j = i; j >= 1; j--) {
            if (numbers[j] > numbers[j- 1]) {
                swap(&numbers[j], &numbers[j - 1]);
            }
        }
    }

    for (m = 0; m < 10; m++) {
        printf("%d", numbers[m]);
        if (m != 9) {
            printf(" ");
        }
    }
    return 0;
}
