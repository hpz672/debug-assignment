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
    char in[500] = {'\0'};
    char out[33] = {'\0'};
    char oneC;
    int oneInt;
    int arr[32];
    int bits[32] = {0};
    int i, j, k;
    
    scanf("%s", in);
    k = strlen(in);
    
    for (i = 0; i < 32; i++) {
        arr[i] = 0;
    }
    
    for (i = 1; i<=k ; i++) {
        oneC = in[i - 1];
        oneInt = oneC;
        arr[i % 32] += oneInt;
    }
    
    for (j = 0; j < 32; j++) {
        oneInt = arr[31 - j] ^ (arr[j] << 1);
        bits[j] = oneInt;
    }
    
    for (j = 0; j < 32; j++) {
        oneInt = (bits[j] % 85 + 34);
        oneC = oneInt;
        out[j] = oneC;
    }
    printf("%s", out);
        
    return 0;
}
