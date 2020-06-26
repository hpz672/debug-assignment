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
int main(void) 
{
    //declaration
    int mtxA[10][10] = {0}, mtxB[10][10] = {0}, mtxC[10][10] = {0};
    int m, n;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            mtxC[i][j] = 0;
        }
    }
    //input
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mtxA[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mtxB[i][j]);
        }
    }
    //process
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            mtxC[i][j] = 0;
            for (int k = 0; k < n; k++) {
                mtxC[i][j] += mtxA[i][k] * mtxB[k][j];
            }
        }
    }
    //output
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            j != m - 1? printf("%d ", mtxC[i][j]):printf("%d", mtxC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
