#include <stdio.h>
/*
input：49
output：396655

input:40
output:31572
*/ 
long long int f(int a, int b)
{
    int i;
    long long int sum=1;
    if (a > b)
        return 1;
    else {
        for (i = a; i <= b; i++)
            sum *= i;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;
    int x;
    int y;
    int m = 1;
    int b = 1;
    for (x = 0; x <= n / 2; x++) {
        for (y = 0; y <= n / 3; y++) {
            if (x * 2 + y * 3 == n) {
                i += f(x + 1 , x + y) / f (1 , y);
            }
        }
    }
    printf("%d", i);
    return 0;
}
