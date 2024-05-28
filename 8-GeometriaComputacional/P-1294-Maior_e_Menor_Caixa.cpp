// 1294 - A Maior e Menor Caixa

#include <stdio.h>
#include <math.h>

int main() {
    double w,l;
    while(scanf("%lf", &w) != EOF){
        scanf("%lf", &l);
        double a = 12.0;
        double b = -4*(w+l);
        double c = w*l;
        double menor1, menor2;
        menor1 = 0.000;
        menor2 = w<l ? w/2 : l/2;
        
        double delta = (b*b)-(4*a*c);
        double raiz = sqrt(delta);
        double maior = ((-1*b)-raiz)/(2*a);

        printf("%.3lf %.3lf %.3lf\n", maior, menor1, menor2);
        

    }
    return 0;
}
