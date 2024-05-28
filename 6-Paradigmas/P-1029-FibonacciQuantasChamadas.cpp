// 1029 - Fibonacci, Quantas Chamadas?

#include <stdio.h>

int fib(int num, int* calls){
    if(num == 0){
        *calls++;
        return 0;
    } else if(num == 1){
        *calls++;
        return 1;
    } else {
        *calls += 2;
        return fib(num-1, calls) + fib(num-2, calls);
    }
}

int main(){
    int reps;
    int i;
    scanf("%d", &reps);
    
    for(i=0; i<reps; i++){
        int num;
        int calls = 0;
        scanf("%d", &num);
        int callsResponse = fib(num, &calls);
        printf("fib(%d) = %d calls = %d\n", num, calls, callsResponse);

    }
}