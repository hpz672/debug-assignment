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
    char string[10][21] = {'\0'};
    char str[21] = {'\0'};
    int i, j;
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 21; j++) {
            scanf("%c", &string[i][j]);
            if(string[i][j] == '\n') {
                string[i][j] = '\0';
                break;
            }
        }
    }
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (strcmp(string[j+1], string[j]) < 0) {
                strcpy(str, string[j+1]);
                strcpy(string[j+1], string[j]);
                strcpy(string[j], str);
            }
        }
    }
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 21; j++) {
            if (string[i][j] == '\0') {
            	if (i != 9) {
            		printf ("\n");
				}
                break;
            }
            else {
                printf ("%c", string[i][j]);
            }
        }
    }
    return 0;
}
