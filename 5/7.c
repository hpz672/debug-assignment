#include <stdio.h>
#include <string.h>
/*
Alice
Bob
Gary
Harry
Ivn
Julia
Danis
Fone
Candy
Evan

Alice
Bob
Candy
Danis
Evan
Fone
Gary
Harry
Ivn
Julia
*/
void swap(char *b, char *c) 
{
    char temp[21] = {'\0'}; 
    strcpy (temp, b);
    strcpy (b, c);
    strcpy (c, temp);
}

int main() 
{
    char name[10][21] = {'\0'};
    int i, j;
    int m = 10;
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    for (j = 0; j < m; j++) {
        for (i = 0; i < m-j-1; i++) {
            if(strcmp(name[i], name[i + 1]) > 0) { 
                    swap(name[i], name[i + 1]);    
            }
        }
    }
    for (i = 0; i < m; i++) {
        printf("%s", name[i]); 
        if (i < m - 1) {
            printf("\n", name[i]);
        }
    }
    return 0;
}
