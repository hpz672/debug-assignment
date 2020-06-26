#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;
    int n;
	int num = 0;
	
    scanf("%d%d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int start = 0, column = n, row = m;
    while (start < column && start < row) {
        if (n == 1) {
            for (int i = 0; i < m; i++) {
                if (i == m - 1) {
                    printf("%d", matrix[i][0]);
                } else {
                    printf("%d ", matrix[i][0]);
                }
            }
        } else if (m == 1) {
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    printf("%d", matrix[0][j]);
                } else {
                    printf("%d ", matrix[0][j]);
                }
            }
        } else {
            for (int j = start; j < column; j++) {
        		printf("%d", matrix[start][j]);
        		num++;
        		if (num != n * m) {
        			printf(" ");
        		}
            }
    		for (int i = start + 1; i < row; i++) {
        		printf("%d", matrix[i][column-1]);
				num++;
        		if (num != n * m) {
        			printf(" ");
        		}
    		} 
    		for (int j = column - 2; j >= start && row - 1 != start; j--) {
        		printf("%d", matrix[row-1][j]);
				num++;
        		if (num != n * m) {
        			printf(" ");
        		}
    		}
    		for (int i = row - 2; i > start && column - 1 != start; i--) {
        		printf("%d", matrix[i][start]);
				num++;
       			if (num != n * m) {
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
