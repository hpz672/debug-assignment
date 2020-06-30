#include <stdio.h>
#include <string.h>
#include <string.h>
/*
输入：
123456789012345678901234567890123
输出：
"p*+,)&'ebst*+,)&'ebst*+,)&'eb&r
*/
int main() {
    int arr[32] = {0};
    char input[500] = {'\0'};
    int bits[32] = {0};
    char result[33] = {'\0'};
    int i = 1, j = 0;
    while (scanf("%c", &input[i - 1]) != EOF) {
        if(input[i - 1] == '\n') {
           break;
        }
        arr[i % 32] = arr[i % 32] + (int)input[i - 1];
        i++;
    }
    
    for (j = 0; j <= 31; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);    
    }
    
    for (j = 0; j <= 31; j++) {
        result[j] = (bits[j] % 85) + 34;    
    }
    
    puts(result);
    return 0;
}
