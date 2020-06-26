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
	char before[4] = {'\0'};
    scanf("%s",before);
    char calculate[1000][3] = {'\0'};
    int i;
    int count=0;
    int counter=0;
    while (scanf("%s",calculate[count]) != EOF) { 
        count++;
    }
    for (i = 0; i < 3; i++) {
        if (before[i] == 'r') {
			counter += 4;
		}
        if (before[i] == 'w') {
			counter+=2;
		}
        if (before[i] == 'x') {
			counter+=1;
		}
    }
    for (i = 0; i < count; i++) {
    	if (calculate[i][0] == '+') {
            if (calculate[i][1]=='r' && ((counter&4) == 0)) {
				counter+=4;
			}
            if (calculate[i][1]=='w' && ((counter&2) == 0)) {
				counter+=2;
			}
            if (calculate[i][1]=='x' && ((counter&1) == 0)) {
				counter+=1;
			}
        } else if (calculate[i][0]=='-') {
            if (calculate[i][1]=='r' && ((counter&4) == 4)) {
				counter-=4;
			}
            if (calculate[i][1]=='w' && ((counter&2) == 2)) {
				counter-=2;
			}
            if (calculate[i][1]=='x' && ((counter&1) == 1)) {
				counter-=1;
			} 
        }  
    }
    printf("%d",counter);
    return 0;
}
