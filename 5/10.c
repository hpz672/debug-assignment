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
    char names[10][21] = {'\0'};
    for (int i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (strcmp(names[j], names[j+ 1]) > 0) {
                char temp[21] = {'\0'};
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
