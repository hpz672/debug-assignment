#include <stdio.h>
/*
input:
2 3 1 9 5 4 4 3 3 2
output:
9 5 4 4 3 3 3 2 2 1
*/ 
int main() 
{
    int n = 10;
    int m;
    int numbers[10] = {0};
    int i;
    int j; 
    int tmpt;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i; j < n; j++) {
            if (numbers[i] < numbers[j]) {
                tmpt = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tmpt;
            }
        }
    }

    for (m = 0; m < 10; m++) {
        if (m != 9) {
            printf("%d ", numbers[m]);
        } else {
            printf("%d", numbers[m]);
        }
    }

    return 0;
}
