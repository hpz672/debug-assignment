#include <stdio.h>
#include <string.h>
/*
测试：答案：5 
w
-r
+r
+r
+x
+r
-w
*/
int main() 
{
    int r = 0, w = 0, x = 0;
    char sign[3] = {'\0'};
    char temp[2] = {'\0'};
    scanf("%s", sign);
    for (int i = 0; i < strlen(sign); i++) {
        if (sign[i] == 'r') {
            r = 1;
        }
        if (sign[i] == 'w') {
            w = 1;
        }
        if (sign[i] == 'x') {
            x = 1;
        }
    }
    while (scanf("%s", temp) != EOF) {
        if (!strcmp(temp, "+x") && x == 0) {
            x++;
        }
         if (!strcmp(temp, "-x") && x == 1) {
            x--;
        }
         if (!strcmp(temp, "+r") && r == 0) {
            r++;
        } 
        if (!strcmp(temp, "-r") && r == 1) {
            r--;
        } 
        if (!strcmp(temp, "+w") && w == 0) {
            w++;
        } 
        if (!strcmp(temp, "-w") && w == 1) {
            w--;
        }
    }
    printf("%d\n", r * 4 + w * 2 + x);
    return 0;
}
