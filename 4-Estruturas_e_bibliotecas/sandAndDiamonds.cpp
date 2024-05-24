#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char items[1000];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

void push(Stack *s, char charac) {
    s->items[++(s->top)] = charac;
}

int pop(Stack *s) {
    if(!isEmpty(s)){
        (s->top)--;
        return 1;
    }
    return 0;
}

int main() {
    int repeats,i;
 
    scanf("%d", &repeats);
    getchar();
    
    for(i = 0; i < repeats; i++){
        int dCount = 0;
        char word[1000];
        fgets(word, sizeof(word), stdin);
        int j;

        Stack s;
            initialize(&s);

        for(j = 0; j < strlen(word)-1; j++){
            if(word[j] == '<'){
                push(&s, '<');
            }else if (word[j] == '>') {
                int popReturn = pop(&s);
                if(popReturn){
                    dCount++;
                }
            }
        }

        printf("%d\n", dCount);
    }
 
    return 0;
}
