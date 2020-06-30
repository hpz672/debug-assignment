#include <stdio.h>
/*
input:
2 3 1 9 5 4 4 3 3 2
output:
9 5 4 4 3 3 3 2 2 1
*/
void swap(int *a, int *b) 
{
    int c;
    if(a <= b) {
        c = *a;
        *a = *b;
        *b = c;
    }
}

int main() 
{
    int n = 10;
    int m;
    int numbers[10] = {0};
    int i;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
        	if(numbers[j] < numbers[j+1])
            swap(&numbers[j], &numbers[j + 1]);	
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if(i != n - 1) {
            printf(" ");
        }
    }

    return 0;
}
