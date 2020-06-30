#include <stdio.h>
#include<string.h>
/*
input:
123456789012345678901234567890123
output:
"p*+,)&'ebst*+,)&'ebst*+,)&'eb&r
*/
int main() 
{
    int i,j,k;
    int arr[32] = {0};
    int bits[32] = {0};
    char str[500] = {'\0'};
    char rstr[32] = {'\0'};
    
    i=0;
    while (scanf("%c", &str[i])!=EOF) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
    k = strlen(str);
    
    for (i = 0; i < k; i++) {
        arr[(i + 1) % 32] += str[i];
    }
    for(j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        rstr[j] = bits[j] % 85 + 34;
    }
    for(i = 0; i < 32; i++) {
        printf("%c", rstr[i]);
    }
    
    return 0;
}
