#include <stdio.h>
/*
input：
5 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
output：
1 2 3 4 5 5 5 5 5 4 3 2 1 1 1 1 2 3 4 4 4 3 2 2 3
*/ 
int main() 
{
    int matrix[100][100] = {0};
    int m;
    int n;
    scanf("%d%d", &m, &n);
    int start = 0, column = n, row = m, sum = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    while(start < column && start < row) {
        if (n == 1) {
            for (int i = 0; i < m; i++) {
                if (sum < m * n) {
                    printf("%d", matrix[i][0]);
                }
                sum ++;
                if (sum < m * n) {
                    printf(" ");
                }
            }
        } else if (m == 1) {
            for (int j = 0; j < n; j++) {
                printf("%d", matrix[0][j]);
                sum ++;
                if (sum < m * n) {
                    printf(" ");
                }
            }
        } else {
            for (int j = start; j < column; j++) {
                if (sum < m * n) {
                    printf("%d", matrix[start][j]);
                    sum ++;
                }
                if (sum < m * n) {
                    printf(" ");
                }
            }
            
            for (int i = start + 1; i < row; i++) {
                if (sum < m * n) {
                    printf("%d", matrix[i][column-1]);
                    sum ++;
                }
                if (sum < m * n) {
                    printf(" ");
                }
            }
            
            for (int j = column-2; j >= start; j--) {
                if (sum < m*n) {
                    printf("%d", matrix[row-1][j]);
                    sum ++;
                }
                if (sum < m * n) {
                    printf(" ");
                }
            }
            
            for (int i = row-2; i > start; i--) {
                if (sum < m * n) {
                    printf("%d", matrix[i][start]);
                    sum ++;
                }
                if (sum < m * n) {
                    printf(" ");
                }
            }
        }
        start++;
        column--;
        row--;
    }
    return 0;
}
