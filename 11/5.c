#include <stdio.h>
#include <string.h>
/*
输入：
123456789012345678901234567890123
输出：
"p*+,)&'ebst*+,)&'ebst*+,)&'eb&r
*/
int main() 
{
    int arr[32] = {'\0'};
    char str[500] = {'\0'};
    int bits[32] = {0};
    char result[32] = {'\0'};
    
    char input;
    int j = 0;
    
    for (int i = 0; i < 32; i++) {
        arr[i] = 0;
    }
    
    while (scanf("%c", &input) != EOF) {
        char string[2] = {'\0'};
        string[0] = input;
        if (!strcmp(string, "\n\0")) {
            break;
        }
        str[j] = (int)(input);
        j++;
    }
    
    for (int i = 0; i < j; i++) {
        arr[(i + 1) % 32] = arr[(i + 1) % 32] + (int)(str[i]);
    }
    
    for (int i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        int b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }
    
    for (int i = 0; i < 32; i++) {
        printf("%c",result[i]);
    }
    return 0;
}
