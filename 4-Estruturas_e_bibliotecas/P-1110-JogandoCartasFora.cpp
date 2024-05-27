// 1110 - Jogando Cartas Fora

#include <stdio.h>

int main() {
    int cardsNum;
    scanf("%d", &cardsNum);
    
    while(cardsNum){
        int arr[cardsNum];
        int arrResult[cardsNum-1];
        int count = cardsNum-1;
        int i;
        for(i=0; i<cardsNum; i++){
            arr[i] = cardsNum-i;
        }
        while(count>=1){
            arrResult[(cardsNum-1)-count] = arr[count];
            int up = arr[count-1];
            for(i=count; i>0; i--){
                arr[i] = arr[i-1];
            }
            arr[0] = up;
            count--;
        }
        printf("Discarded cards: ");
        for(i=0; i<cardsNum-1; i++){
            if(i == cardsNum-2){
                printf("%d\n", arrResult[i]);
            }else{
                printf("%d, ", arrResult[i]);
            }
        }
        printf("Remaining card: %d\n", arr[count]);
        scanf("%d", &cardsNum);
    }

    return 0;
}
