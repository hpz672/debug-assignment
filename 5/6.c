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
    int i,k;
    char n[10][21] = {'\0'};
    char m[21] = {'\0'};
    for (i = 0; i < 10; i++) {
        scanf("%s", &n[i]);
    }
    for(i = 0; i < 10; i++) {
        for(k = i + 1; k < 10; k++) {
            if(strcmp(n[i], n[k])>0) {
                strcpy(m, n[i]);
                strcpy(n[i], n[k]);
                strcpy(n[k], m);
            }
        }
    printf("%s\n", n[i]); 
    }
    return 0;
}
