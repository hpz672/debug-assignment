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
    int max;
    int inter;

    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i <= 9; i++) {
        max = i;
        for(m = i; m < 9; m++) {
            if(numbers[max] < numbers[m+1]) {
                max = m + 1;
            }
        }
        inter = numbers[i];
        numbers[i] = numbers[max];
        numbers[max] = inter;
    }
    
    for(i = 0; i <= 9; i++) {
        printf("%d", numbers[i]);
        if(i != 9) {
            printf(" ");
        }
    }

    return 0;
}  
