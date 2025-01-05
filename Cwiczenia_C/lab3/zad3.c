#include <stdio.h>
// Zadanie 3
int main() {
    int n, a;

    
    printf("Podaj rozmiar tablicy (n): ");
    scanf("%d", &n);
    printf("Podaj wartoœæ pocz¹tkow¹ (a): ");
    scanf("%d", &a);

    int tab[n];

 
    for (int i = n - 1; i >= 0; i--) {
        tab[i] = a--;
    }

    printf("Tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}