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
    char name[n][200] = {'\0'};
    
    for (int i = 0; i < n; i++) {
        gets(name[i]);
    }
    
    char name_max[200] = {'\0'};
    strcpy(name_max, name[0]);

    for (int i = 1; i < n; i++) {
        if (strlen(name_max) < strlen(name[i]))
            strcpy(name_max, name[i]);
    }

    printf("%s", name_max);
    return 0;
}
