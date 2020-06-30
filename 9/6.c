#include <stdio.h>
/*
input：49
output：396655

input:40
output:31572
*/ 
int main()
{
    int N;
    int i;
    int part[51] = {0};
    part[2] = 1;
    part[3] = 1;
    part[4] = 1;
    
    scanf("%d", &N);
    if (N <= 4) {
        printf("%d", part[N]);
        return 0;
    }
    for (i = 5; i < N; i++) {
        part[i] = part[i - 2] + part[i - 3];
    }
    
    printf("%d", part[N - 2] + part[N - 3]);
    return 0;
}
