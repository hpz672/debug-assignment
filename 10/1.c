#include <stdio.h>

int main()
{
    int a, b, c = 0, d;
    scanf("%d", &a);
    for (d = 2; d <= a; d += 1) {
    	c = 0;
        for (b = 2; b < d; b += 1) {
            if (d % b == 0) {
                c += 1;
            }
        }
        if (c == 0) {
            printf("%d\n", d);
        }
    }

    return 0;
}
