#include <stdio.h>
/*
input: 
3 2
1 2
3 4
5 6
1 2 3
3 4 6
output:
7 10 15
15 22 33
23 34 51
*/
int main() 
{
    int matrix_a[10][10] = {0};
    int matrix_b[10][10] = {0};
    int matrix_c[10][10] = {0};
    int m, n;
    int i, j, k;
    
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (k = 0; k < n; k++) {
            scanf("%d", &matrix_a[i][k]);
        }	
    }
    	
    for (k = 0; k < n; k++) {
        for (i = 0; i < m; i++) {
            scanf("%d", &matrix_b[k][i]);
        }
    }
    
    for (i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            for (k = 0; k < n; k++) {
                matrix_c[i][j] += (matrix_a[i][k] * matrix_b[k][j]);
            }
        }
    }
    
    for (i = 0; i < m; i++) {
        for (k = 0; k < m; k++) {
            printf("%d", matrix_c[i][k]);
            if (k < m - 1 ) {
                printf(" ");
            }
            if (i == m - 1) {
                continue;
            }
            if (k == m - 1) {
                printf("\n");
            }
        }
    }
    
    return 0;
}
