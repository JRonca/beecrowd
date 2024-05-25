// 1080 - Maior e Posição

#include <stdio.h>

typedef struct {
    int key;
    int value;
} Maior;

int main(){
    int i;
    Maior maiorNum;

    maiorNum.key = -1;
    maiorNum.value = -1;
    for(i = 1; i<=100; i++){
        int num;
        scanf("%d", &num);

        if(num > maiorNum.value){
            maiorNum.key = i;
            maiorNum.value = num;
        }
    }

    printf("%d\n", maiorNum.value);
    printf("%d\n", maiorNum.key);
    return 0;
}