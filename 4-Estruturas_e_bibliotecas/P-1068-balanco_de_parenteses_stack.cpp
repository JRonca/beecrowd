// 1068 - Balanço de Parênteses I

#include <stdio.h>
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

int read(Stack *s) {
    return s->items[s->top];
}

int main() {
    char word[1000];
    
    while(scanf("%s", word) != EOF){
        int j;

        Stack s;
        initialize(&s);

        for(j = 0; j < strlen(word); j++){
            if(word[j] == '('){
                push(&s, '(');
            }else if (word[j] == ')') {
                if((s.top) != -1 && read(&s) == '('){
                    pop(&s);
                } else {
                    push(&s, ')');
                }
            }
        }
        printf("%s\n",isEmpty(&s) ? "correct" : "incorrect");

    }
 
    return 0;
}
