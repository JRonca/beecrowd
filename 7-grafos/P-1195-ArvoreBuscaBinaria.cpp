// 1195 - Árvore Binária de Busca

#include <cstdlib>
#include <stdio.h>

typedef struct tree {
    int value;
    struct tree* r;
    struct tree* l;
    struct tree* p;
} Tree;

Tree* createTree() {
    return NULL;
}

void insertTree(Tree** t, int value){
    if(*t == NULL){
        *t = (Tree*)malloc(sizeof(Tree));
        (*t)->p = NULL;
        (*t)->l = NULL;
        (*t)->r = NULL;
        (*t)->value = value;
    } else {
        if(value < (*t)->value){
            insertTree(&(*t)->l, value);
        } else if(value > (*t)->value){
            insertTree(&(*t)->r, value);
        }
    }
}

void printPreOrder(Tree* t){
    if(t != NULL){
        printf(" %d", t->value);
        printPreOrder(t->l);
        printPreOrder(t->r);
    }
}
void printInOrder(Tree* t){
    if(t != NULL){
        printInOrder(t->l);
        printf(" %d", t->value);
        printInOrder(t->r);
    }
}
void printPosOrder(Tree* t){
    if(t != NULL){
        printPosOrder(t->l);
        printPosOrder(t->r);
        printf(" %d", t->value);
    }
}

int main() {
    int i,cases;

    scanf("%d", &cases);

    for (i=0; i<cases; i++) {
        Tree* t = createTree();
        int j,nodes;
        scanf("%d", &nodes);
        int node[nodes];

        for (j=0; j<nodes; j++) {
            scanf("%d", &node[j]);

            insertTree(&t, node[j]);
        }
        printf("Case %d:\n", i+1);
        printf("Pre.:");
        printPreOrder(t);
        printf("\n");
        printf("In..:");
        printInOrder(t);
        printf("\n");
        printf("Post:");
        printPosOrder(t);
        printf("\n\n");
    }
    return 0;
}