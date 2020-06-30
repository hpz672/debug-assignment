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
    scanf("%d\n", &n);
    char names[1000][101]={'\0'};
    char max[101]={'\0'};
    
    for (int i = 0; i < n; i++) {
         gets(names[i]);
    } 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strlen(names[j]) >= strlen(names[j + 1])) {
                strcpy(max, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], max);
            }
        }
    }
    strcpy(max, names[n - 1]);
    printf("%s\n", max);
    return 0;
}
