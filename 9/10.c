#include <stdio.h>
/*
input：49
output：396655

input:40
output:31572
*/
int f(int n) 
{
	if (n == 1) {
		return 0;
	}
	if (n <= 3) {
        return 1;
    }
    else {
        return f(n - 2) + f(n - 3);
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", f(n));
    return 0;
}
