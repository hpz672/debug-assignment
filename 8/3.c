#include <stdio.h>
#include <string.h>
/*
8
Steve Jobs
Sunny Fei
Hu guanqing
This is a training
I hope it farewell
Kong weihan
Bill Ma
Hello world
*/
int main() 
{
    int n;
    scanf("%d\n", &n);
    size_t max = 0;
    size_t current = 0;
    char maxName[200]={'\0'};
    char name[200]={'\0'};
    for (int i = 0; i < n; ++i) {
        gets(name);
        current = strlen(name);
        if (current > max) {
           max = current;
           strcpy(maxName, name);
        }
    }
    printf(maxName);
    return 0;
}
