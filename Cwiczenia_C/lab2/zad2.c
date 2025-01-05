#include <stdio.h>
#include <stdlib.h>


int main() {
    int liczba, s_ujemna = 0, s_dodatnia = 0;
    int dodatnie = 0, ujemne = 0;

    printf("Podaj 10 liczb:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &liczba);
        if (liczba < 0) {
            s_ujemna += liczba;
            ujemne++;
        }
        else {
            s_dodatnia += liczba;
            dodatnie++;
        }
    }

    printf("ilosc liczb dodatnich i ich suma %d %d\n", dodatnie, s_dodatnia);
    printf(" ilosc liczb ujemnych i ich suma %d %d\n", ujemne, s_ujemna);

    return 0;
}