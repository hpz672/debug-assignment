#include <stdio.h>
#include <string.h>
/*
8
Sunny Fei
Everybody fighting 
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
    char names[n][101];
    char max[101]={'\0'}; 
    for (int i = 0; i < n; i++) {
         int z = 0;
         while (scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n') {
             z++;
         }
         names[i][z]='\0';
    }
    strcpy(max, names[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((strlen(names[j]) > strlen(names[i])) && (strlen(max) < strlen(names[j]))) {
                strcpy(max, names[j]);
            }
        }
    }
    printf("%s\n", max);
    return 0;
}
