#include <stdio.h>
#include <string.h>
/*
测试：答案：5 
w
-r
+r
+r
+x
+r
-w
*/
int main() 
{
    char input[4] = {'\0'};
    int initial = 1;
    int counter = 0;
    int i, j;
    scanf("%s", input);
    char operation[3] = {'\0'};
     
    if (input[0] == 'r' && input[1] == 'w' && input[2] == 'x') {
        counter = 7;
    } else if (input[0] == 'r' && input[1] == 'w') {
        counter = 6;
    } else if (input[0] == 'r' && input[1] == 'x') {
        counter = 5;
    } else if (input[0] == 'w' && input[1] == 'x') {
        counter = 3;
    } else if (input[0] == 'r') {
        counter = 4;
    } else if (input[0] == 'w') {
        counter = 2; 
    } else {
        counter = 1;
    }
    while (scanf("%s", operation) != EOF) {
        if (operation[0] == '+' && operation[1] == 'r' && ((counter&4) == 0)) {
            counter += 4;
        } else if (operation[0] == '+' && operation[1] == 'w' && ((counter&2) == 0)) {
            counter += 2;
        } else if (operation[0] == '+' && operation[1] == 'x' && ((counter&1) == 0)) {
            counter += 1;   
        } else if (operation[0] == '-' && operation[1] == 'r' && ((counter&4) == 4)) {
            counter -= 4; 
        } else if (operation[0] == '-' && operation[1] == 'w' && ((counter&2) == 2)) {
            counter -= 2;
        } else if (operation[0] == '-' && operation[1] == 'x' && ((counter&1) == 1)) {
            counter -= 1;
        }
    }
    printf("%d", counter);
    return 0;
}
