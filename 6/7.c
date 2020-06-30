#include <stdio.h>

void add(char);
void delete(char);
int rwx = 0;

int main()
{

    char temp;
    scanf("%c", &temp);
    if (temp == 'x') {
        rwx ^= (1 << 0);
        getchar(); //to solve the enter sign
    } else if (temp == 'w') {
        rwx ^= (1 << 1);
        scanf("%c", &temp);
        if (temp == 'x') {
            rwx ^= (1 << 0);
            getchar(); //to solve the enter sign
        }
    } else if (temp == 'r') {
        rwx ^= (1 << 2);
        scanf("%c", &temp);
        if (temp == 'w') {
            rwx ^= (1 << 1);
            scanf("%c", &temp);
            if (temp == 'x') {
                rwx ^= (1 << 0);
                getchar(); //to solve the enter sign
            }
        }
        if (temp == 'x') {
            rwx ^= (1 << 0);
            getchar(); //to solve the enter sign
        }
    }
    

    while (scanf("%c", &temp) != EOF) {
        if (temp == '+') {
            scanf("%c", &temp);
            add(temp);
        }
        else if (temp == '-') {
            scanf("%c", &temp);
            delete(temp);
        }
        getchar(); //to solve the enter sign
    }

    printf("%d", rwx);
    return 0;
}

void add(char input)
{
    if (input == 'r' && rwx / 4 != 1) {
        rwx ^= (1 << 2);
    }
    else if (input == 'w' && (rwx / 2 % 2 != 1)) {
        rwx ^= (1 << 1);
    }
    else if (rwx % 4 != 1) {
        rwx ^= (1 << 0);
    }
}

void delete(char input)
{
    if (input == 'r' && rwx / 4 == 1) {
        rwx ^= (1 << 2);
    }
    else if (input == 'w' && (rwx / 2 % 2 == 1)) {
        rwx ^= (1 << 1);
    }
    else if (rwx % 4 == 1) {
        rwx ^= (1 << 0);
    }
}
