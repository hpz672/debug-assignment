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
    int result[10][10];
    int m, n;
    int i, j, k;
    scanf("%d %d", &m, &n);
    for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            result[i][j] = 0;
        }
    }
     
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix_a[i][j]);
        }
    }
    
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            scanf("%d", &matrix_b[j][i]);
        }
    }
    
   for(i = 0; i < m; i++) {
        for(j = 0; j < m; j++) {
            for(k = 0; k < n; k++) {
                result[i][j] += (matrix_a[i][k] * matrix_b[k][j]);
            }
        }
    }
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", result[i][j]);
            if (j != m - 1) {
                printf(" ");
            }        
        }
        printf("\n");
    }
    
    return 0;
}
