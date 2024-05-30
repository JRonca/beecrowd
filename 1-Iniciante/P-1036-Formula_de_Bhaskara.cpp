// 1036 - Fórmula de Bhaskara

#include <stdio.h>
#include <math.h>

int main() {
    double a,b,c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    double delta = (b*b)-(4*a*c);

    if(!a || delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    }

    double raiz = sqrt(delta);
    double BhaskaraX1 = ((-1*b)+raiz)/(2*a);
    double BhaskaraX2 = ((-1*b)-raiz)/(2*a);

    printf("R1 = %.5lf\n", BhaskaraX1);
    printf("R2 = %.5lf\n", BhaskaraX2);
    
    return 0;
}
