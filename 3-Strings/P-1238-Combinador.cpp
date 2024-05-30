// 1238 - Combinador

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int reps, i;

    scanf("%d", &reps);

    for(i = 0; i < reps; i++){
        int j;
        char str1[50] = "";
        char str2[50] = "";

        scanf("%s", str1);
        scanf("%s", str2);
        setbuf(stdin, NULL);

        int str1Len = strlen(str1);
        int str2Len = strlen(str2);
        char* maiorSTR;
        int maiorStrLen;

        char* menorSTR;
        int menorStrLen;

        int resultLen = str1Len + str2Len;
        if(str1Len > str2Len){
            maiorSTR = str1;
            menorSTR = str2;
            maiorStrLen = str1Len;
            menorStrLen = str2Len;
        } else {
            maiorSTR = str2;
            menorSTR = str1;
            maiorStrLen = str2Len;
            menorStrLen = str1Len;
        }

        char strResult[resultLen];

        for(j = 0; j < menorStrLen; j++){
            strResult[j*2] = str1[j];
            strResult[(j*2)+1] = str2[j];
        }

        int k = j;
        
        int h = j*2;
        int tst = strlen(strResult);
        for(j = k; j < maiorStrLen; j++){
            strResult[h] = maiorSTR[j];
            h++;
        }
        strResult[h] = '\0';
        printf("%s\n", strResult);
    }
    return 0;
}