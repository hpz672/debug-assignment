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
    int i, j;
    int count = 0;
    int max;
    
    //input m & n & matrix
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (j < n - 1)
                scanf(" ");
        }
    }
    max = m * n;
    
    //output the first line
    for (j = 0; j < n - 1; j++) {
        printf("%d ", matrix[0][j]);
            count++;
    }
    if (count == max - 1) {
        printf("%d", matrix[0][n - 1]);
    }
    else {
        printf("%d ", matrix[0][n - 1]);		
    }
    count++;
    
    do {
        int matrix_[n][m]; //rotate the matrix to -90 degree which becomes matrix_
        for (i = 0; i < n; i++) {
            for (j = 0; j < m - 1; j++) {
                matrix_[i][j] = matrix[j + 1][n - 1 - i];
            }
        }
        	
        for (j = 0; j < m - 1; j++) {
            printf("%d", matrix_[0][j]);
            count++;
            if (count < max) {
                printf(" ");
            }
        }
        
        //cover original matrix with new matrix_
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                matrix[i][j] = matrix_[i][j];
            }
        }
        
        int t;
        t = m;
        m = n;
        n = t - 1;
        
    } while (m >= 1 && n >= 1);
    
    return 0;
}
