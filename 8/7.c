#include <stdio.h>
#include <string.h>
/*
8
Everybody fighting 
Sunny Fei
Hu guanqing
This is a training
Kong weihan
I hope it farewell
Bill Ma
Hello world
*/
int main() 
{
    int n;
    int i, j;
    scanf("%d\n", &n);
    char names[n][101];
    char temp[101] = {'\0'};
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < 101; j++) {
            scanf("%c", &names[i][j]);
            if (names[i][j] == '\n') {
                names[i][j] = '\0';
                break;
            }            
        }
    }
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (strlen(names[j]) < strlen(names[j + 1])) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);               
            }            
        }   
    } 
    
    printf("%s\n", names[0]);   
    return 0;
}
