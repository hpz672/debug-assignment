#include <stdio.h>
#include <string.h>
/*
input:
123456789012345678901234567890123
output:
"p*+,)&'ebst*+,)&'ebst*+,)&'eb&r
*/
int main() 
{
    char str[500] = {'\0'}, fs[33];
    int arr[32] = {0}; 
    int bits[32] = {0};
    int i;
    memset(arr, 0, sizeof(arr));
    memset(fs, '\0', sizeof(fs));
    scanf("%s", str);
    
    for (i = 0; i < strlen(str); i++){
        if (str[i] == '\n') {
            break;
        }
        arr[(i+1) % 32] += str[i];
    }
    
    for (i = 0; i < 32; i++){
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        fs[i] = bits[i] % 85 + 34;
    }
    
    printf("%s", fs);
    return 0;
}
