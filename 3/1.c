#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;
    int n;
    int i, j;
    int x;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
   	    scanf("%d", &matrix[i][j]);
        }
    }
    x = 0;
    int sum = 0; 
    while (x <= (m - 1) / 2 && x <= (n - 1) / 2) {
        for (i = x; i <= n - 1 - x; i++) {
            printf("%d", matrix[x][i]);
            sum++;
            if(sum != n * m) {
                printf(" ");
            }
        }
        for (i = x + 1; i <= m - 2 - x; i++) {
            printf("%d", matrix[i][n - 1 - x]);
            sum++;
            if(sum != n * m) {
                printf(" ");
            } 
        }
        for (i = x; i <= n - 1 - x && m - 1 - x != x; i++) {
            printf("%d", matrix[m - 1 - x][n - 1 - i]);
            sum++;
            if(sum != n * m) { 
                printf(" ");
            } 
        }
        for (i = x + 1; i <= m - 2 - x && x != (n - 1 - x); i++) {
            printf("%d", matrix[m - 1 - i][x]);
            sum++;
            if(sum != n * m) { 
                printf(" ");
            } 
        }
        x++;
     }
     return 0;
}
