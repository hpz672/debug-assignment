#include <stdio.h>
/*
2016-2-29
YES

2020-6-31
1900-2-29
2000-2-30
NO
*/ 
int main()
{
    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if (m <= 0 || m >= 13) {
        printf("NO");
        return 0;
    }
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d <= 31) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else if (m != 2) {
        if (d <= 30) {
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    else {
        if (y % 100 != 0 && y % 4 == 0 || y % 400 == 0) {
            if (d <= 29) {
                printf("YES");
            }
            else {
                printf("NO");
            }
        }
        else {
            if (d <= 28) {
                printf("YES");
            }
            else {
                printf("NO");
            }
        }
    }
    
    return 0;
}
