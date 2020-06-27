#include <stdio.h>
#include <string.h>

int main() 
{
    int r = 0;
    int w = 0;
    int x = 0;
    char plus[2] = "+";
    char minus[2] = "-";
    char oprator[2] = "@";
    char rr[2] = "r";
    char ww[2] = "w";
    char xx[2] = "x";
    
    int i;
    char pms[4] = {'\0'};
    scanf("%s", pms);
    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            r = 1;
        } else if (pms[i] == 'w') {
            w = 1;
        } else {
            x = 1;
        } 
    }
    
    char input;
    while (scanf("%c", &input) != EOF) {
        char str[2] = {'\0'};
        str[0] = input;
        if (strcmp(str, rr) == 0) {
            if ((!strcmp(oprator, plus)) && (r == 0)) {
                r = 1;
            } else if ((!strcmp(oprator, minus)) && (r == 1)) {
                r = 0;
            }
        } else if (strcmp(str, ww) == 0) { 
            if ((!strcmp(oprator, plus)) && (w == 0)) {
                w = 1;
            } else if ((!strcmp(oprator, minus)) && (w == 1)) {
                w = 0;
            }
        } else if (strcmp(str, xx) == 0) {
            if ((!strcmp(oprator, plus)) && (x == 0)) {
                x = 1;
            } else if ((!strcmp(oprator, minus)) && (x == 1)) {
                x = 0;
            }
        } else if (strcmp(str, plus) == 0) {
            oprator[0] = '+';
        } else if (strcmp(str, minus) == 0) {
            oprator[0] = '-';
        }
    }
    int output = x * 1 + w * 2 + r * 4;
    printf("%d", output);
    
    return 0;
}
