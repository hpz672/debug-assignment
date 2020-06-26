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
    int matrix_result[15][15] = {0};
    int m;
    int n;
    scanf("%d %d", &m, &n);
    
    int mIndex;
    int nIndex;
    int j;
    
    for (mIndex = 0; mIndex < m; mIndex ++) {
        for (nIndex = 0; nIndex < n; nIndex ++) {
            scanf("%d", &matrix_a[mIndex][nIndex]);
        }
    }
    for (nIndex = 0; nIndex < n; nIndex++) {
        for (mIndex = 0; mIndex < m; mIndex ++) {
            scanf("%d", &matrix_b[nIndex][mIndex]);
        }
    }
    
    for (mIndex = 0; mIndex < m; mIndex ++) {
        for (nIndex = 0; nIndex < m; nIndex ++) {
            for (j = 0; j < n + 1; j ++) {
                matrix_result[mIndex][nIndex] += matrix_a[mIndex][j] * matrix_b[j][nIndex];
            }  
        }
    }
    
    for (mIndex = 0; mIndex < m; mIndex ++) {
        for (nIndex = 0; nIndex < m; nIndex ++) {
            printf("%d", matrix_result[mIndex][nIndex]);
            if (nIndex == m - 1 && mIndex != m - 1) {
                printf("\n");
            } else if(mIndex != m ) {
                printf(" ");
            }
        }
    }
    
    return 0;
}
