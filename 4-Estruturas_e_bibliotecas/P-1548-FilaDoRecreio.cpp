// 1548 - Fila do Recreio
#include <stdio.h>

typedef struct {
    int nota;
    int initialPos;
    int finalPos;
} Alunos;

void insertionSort(Alunos arr[], int n){
    int i,j;
    for(i=1; i<n; i++){
            Alunos aux = arr[i];
            int j = i-1;
            while(j>=0 && arr[j].nota < aux.nota){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = aux;
        }
}

int main() {
    int reps,i;
    scanf("%d", &reps);
    getchar();

    for(i=0; i<reps ;i++){
        int alunosNum,j;
        scanf("%d", &alunosNum);
        int alunosNaoTrocados = alunosNum;
        Alunos alunos[alunosNum];
        for(j=0; j<alunosNum; j++){
            alunos[j].initialPos = j;
            scanf("%d", &alunos[j].nota);
        }
        insertionSort(alunos,alunosNum);
        for(j=0; j<alunosNum; j++){
            alunos[j].finalPos = j;
            if(alunos[j].finalPos != alunos[j].initialPos){
                alunosNaoTrocados--;
            }
        }
        printf("%d\n", alunosNaoTrocados);
    }
    return 0;
}