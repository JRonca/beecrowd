// 1040 - Média 3

#include <stdio.h>
 
int main() {
    float a,b,c,d;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    float media = (a*2+b*3+c*4+d*1)/10;

    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    } else if(media < 5){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        float exame;
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        float mediaFinal = (media+exame)/2;
        if(mediaFinal>=5.0){
            printf("Aluno aprovado.\n");
        } else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", mediaFinal);
    }
    return 0;
}