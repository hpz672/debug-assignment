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
int main() 
{
    int i,j;
    char name[10][21]={'\0'};
    for(i = 0; i < 10; i++) {
        scanf("%s", name[i]);
    }
    
    for(i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if(strcmp(name[j], name[j+1]) > 0) {
                char temp[21] = {'\0'};
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
        }
    }

    for(i = 0; i < 10; i++) {
        printf("%s\n", name[i]);
    }
    
    return 0;
}
