// 2242 - Huaauhahhuahau

#include <stdio.h>
#include <string.h>

int main() {
    char risada[50] = "";
    char vogais[50] = "";
    int i;
    char resu = 'S';

    scanf("%s", risada);
    getchar();

    for(i=0; i<strlen(risada); i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            vogais[strlen(vogais)] = risada[i];
        }
    }

    int tam = strlen(vogais);

    for(i=0; i<tam/2; i++){
        if(vogais[i] != vogais[tam-(i+1)]){
            resu = 'N';
        }
    }

    printf("%c\n", resu);

    return 0;
}