#include <stdio.h>

void tri_insertion(int tab[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = tab[i];  
        j = i - 1;
        

        while (j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        
        tab[j + 1] = key; 
    }
}

void afficher_tableau(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tableau[] = {12, 11, 13, 5, 6};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    printf("Tableau avant le tri : ");
    afficher_tableau(tableau, taille);

    tri_insertion(tableau, taille);

    printf("Tableau après le tri : ");
    afficher_tableau(tableau, taille);

    return 0;
}
