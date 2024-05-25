// 1103 - Alarme Despertador

#include <stdio.h>

int main () {
    int h1 = 0;
    int m1 = 0;
    int h2 = 0;
    int m2 = 0;

    do {
        scanf("%d", &h1);
        scanf("%d", &m1);
        scanf("%d", &h2);
        scanf("%d", &m2);

        if(h2 < h1 || h2 == h1 && m2 < m1) {
            h2 = h2 + 24;
        }

        int exp = (h2*60+m2) - (h1*60+m1);

        exp && printf("%d\n", (h2*60+m2) - (h1*60+m1));
    } while(h1 || m1 || h2 || m2);
}