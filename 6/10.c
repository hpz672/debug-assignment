#include <stdio.h>
#include <string.h>

int main() 
{
    char pms[4] = {'\0'};
    char change_pms[1000][3] = {'\0'};
    int i = 0;
    int j = 0;
    int num = 0;
    int a = 0;
    
    scanf("%s", pms);
    while (scanf("%s",change_pms[i++]) != EOF) {
        ; 
    }
    num = i;
    
    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else {
            a += 1;
        } 
    }
    
    for (i = 0; i < num; i++) {
        j = 0;
        if (change_pms[i][j] == '+') {
            if (change_pms[i][j + 1] == 'r' && ((a & 4) == 0)) {
               a += 4;   
            } 
			else if (change_pms[i][j + 1] == 'w' && ((a & 2) == 0)) {
                a += 2;
            } 
			else if (change_pms[i][j + 1] == 'x' && ((a & 1) == 0)) {
                a += 1;
            }
        } else {
            if (change_pms[i][j + 1] == 'r' && ((a & 4) == 4)) {
               a -= 4;   
            } 
			else if (change_pms[i][j + 1] == 'w' && ((a & 2) == 2)) {
                a -= 2;
            } 
			else if (change_pms[i][j + 1] == 'x' && ((a & 1) == 1)) {
                a -= 1;
            }
        }
    }
    printf("%d", a);
    return 0;
}
