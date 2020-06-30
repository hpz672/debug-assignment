#include <stdio.h>
/*
input：49
output：396655

input:40
output:31572
*/ 
int main()
{
    int i, N, x;
    int a[61] = {0};
    
    scanf("%d", &N);
    a[2] = 1;
    a[3] = 1;
    for (i = 4; i <= N; i++) {
        a[i] = a[i - 2] + a[i - 3];
    }
    
    printf("%d", a[N]);
    return 0;
}
