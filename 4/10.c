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
	int j, k;
    int max;
    int o;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (j = 0; j < n; j++) {
        m = j;
        for(k = j; k < n - 1; k++) {
            if(numbers[m] < numbers[k + 1]) {
                m = k + 1;
            }
        }
        if (m != j) {
            o = numbers[j];
            numbers[j] = numbers[m];
            numbers[m] = o;
        }
    }
    
    for (int q = 0; q < n; q++) {
        if (q == 9) {
            printf("%d", numbers[q]);
        } else {
            printf("%d ", numbers[q]);
        }
    }

    return 0;
}
