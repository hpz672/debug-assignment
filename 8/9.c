#include <stdio.h>
#include <string.h>
/*
8
Sunny Fei
This is a training
Hu guanqing
Kong weihan
I hope it farewell
Bill Ma
Hello world
Everybody fighting
*/
int main() 
{
    int n;
    int i, j;
    scanf("%d\n", &n);
    char string[n][101];
    for (i = 0; i < n; i++) {
        for (j = 0; j < 101; j++) {
            scanf("%c", &string[i][j]);
            if (string[i][j] == '\n') {
                string[i][j] = '\0';
                break;
            }
        }
    }
    
    char str[200] = {'\0'};
    for (i = 0; i < n-1; i++) {
        if (strlen(string[i]) >= strlen(string[i+1])) {
            strcpy(str,string[i]);
            strcpy(string[i],string[i+1]);
            strcpy(string[i+1],str);
        }
    }
    
    printf("%s", string[n-1]);
    return 0;
}
