#include <stdio.h>
/*
input:
5 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
output:
1 2 3 4 5 5 5 5 5 4 3 2 1 1 1 1 2 3 4 4 4 3 2 2 3
*/ 
int main() 
{
    int matrix[100][100] = {0};
    int m, n;
 
    int k = 0;
    int l = 0;
 
    scanf("%d %d", &m, &n);
    int num = m*n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
 
    while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (int i = l; i < n; i++) {
            printf("%d", matrix[k][i]);
            num--;
            if(num != 0) {
                printf(" ");
            }    
        }
        k++;
 
        /* Print the last column from the remaining columns */
        for (int i = k; i < m; i++) {
            printf("%d", matrix[i][n - 1]);
            num--;
            if(num != 0) {
                printf(" ");
            }
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if (k < m) {
            for (int i = n - 1; i >= l; i--) {
                printf("%d", matrix[m - 1][i]);
                num--;
                if(num != 0) {
                    printf(" ");
                }
            }
            m--;
        }
 
        /* Print the first column from the remaining columns */
        if (l < n) {
            for (int i = m - 1; i >= k; i--) {
                printf("%d", matrix[i][l]);
                num--;
                if (num != 0) {
                    printf(" ");
                }
            }
            l++;    
        }        
    } 
    return 0;
}
