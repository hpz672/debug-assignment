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
    int i = 0;
    int counter = 0;
	char temp[1000][4] = {'\0'};
    char name[4] = {'\0'};
    while (scanf("%s", name) != EOF) {
        strcpy(temp[i], name);
        i++;
    }
    
    for (int j = 0; j < 3; j++) {
        if (temp[0][j] == 'w') {
            counter += 2;
    	} else if (temp[0][j] == 'r') {
            counter += 4;
    	} else if (temp[0][j] == 'x') {
            counter += 1;
    	}
    }
    for (int a = 1; a < 1000; a++) { 
    	if (temp[a][0] == '\0') { 
    		break;
    	} else if (temp[a][0] == '+' && temp[a][1] == 'r' && (counter&4) == 0) {
            counter += 4;
        } else if (temp[a][0] == '+' && temp[a][1] == 'w' && (counter&2) == 0) {
            counter += 2;
        } else if (temp[a][0] == '+' && temp[a][1] == 'x' && (counter&1) == 0) {
            counter += 1;
        } else if (temp[a][0] == '-' && temp[a][1] == 'r' && (counter&4) == 4) {
            counter -= 4;
        } else if (temp[a][0] == '-' && temp[a][1] == 'w' && (counter&2) == 2) {
            counter -= 2;
        } else if (temp[a][0] == '-' && temp[a][1] == 'x' && (counter&1) == 1) {
            counter -= 1;
        }
    }
    printf("%d", counter);
    return 0;
}
