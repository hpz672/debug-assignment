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
    int m = 0;
    int n = 0;
    int i, j;
    int startX = 0;
    int startY = 0;
    int endX, endY;
    int count = 0; 

    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    while (startX * 2 < m && startY * 2 < n) {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        if (startY <= endY) {
            for (j = startY; j <= endY; j++) {
            	count++;
            	if (count != m * n) {
                	printf("%d ", matrix[startX][j]);
				}
				else {
					printf("%d", matrix[startX][j]);
				}
            }
        }

        if (startX <= endX) {
            for (j = startX + 1; j <= endX; j++) {
                count++;
                if(count != m * n) {
                	printf("%d ", matrix[j][endY]);
				}
				else {
					printf("%d", matrix[j][endY]);
				}
            }
        }
        if (endX > startX && startY < endY) {
            for (j = endY - 1; j >= startY; j--) {
            	count++;
            	if(count != m * n) {
                	printf("%d ", matrix[endX][j]);
				}
				else {
					printf("%d", matrix[endX][j]);
				}
            }
        }
        if (endX - 1 > startX && startY < endY) {
            for (i = endX - 1; i >= startX + 1; i--) {
            	count++;
            	if(count != m * n) {
            	    printf("%d ", matrix[i][startX]);
				}
				else {
					printf("%d", matrix[i][startX]);
				}
            }
        }
        startX++;
        startY++;
    }
    
    return 0;
}
