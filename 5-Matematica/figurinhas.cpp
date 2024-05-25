// 1028 - Figurinhas

#include <stdio.h>

int division(int a, int b){
    int rest = a % b;
    return rest == 0 ? b : division(b, rest);
}

int main (){
    int rep, i;
    scanf("%d", &rep);
    
    for(i = 0; i < rep; i++){
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        if (a < b) {
            a = a + b;
            b = a - b;
            a = a - b;
        }
        printf("%d\n", division(a, b));
    }
    return 0;
}