#include<stdio.h>

void tri_fusion(int arr[], int gauche ,int droite ,int milieu ){ 



    int i, j, k;
    int n1 = milieu - gauche + 1;
    int n2 = droite - milieu;
    int gauche_arr[n1], droite_arr[n2];

    for (i = 0; i < n1; i++)
        gauche_arr[i] = arr[gauche + i];
    for (j = 0; j < n2; j++)
        droite_arr[j] = arr[milieu + 1 + j];


    i = 0;
    j = 0;
    k = gauche;

    while (i < n1 && j < n2) {
        if (gauche_arr[i] <= droite_arr[j]) {
            arr[k] = gauche_arr[i];
            i++;
        } else {
            arr[k] = droite_arr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = gauche_arr[i];
        i++;
        k++;
    }

  
    while (j < n2) {
        arr[k] = droite_arr[j];
        j++;
        k++;
    }
}


void tri_fusion(int arr[], int gauche, int droite) {
    if (gauche < droite) {

        int milieu = gauche + (droite - gauche) / 2;
        tri_fusion(arr, gauche, milieu);
        tri_fusion(arr, milieu + 1, droite);
        fusion(arr, gauche, milieu, droite);
    }
}


void afficher_tableau(int arr[], int taille) {
    int i;
    for (i = 0; i < taille; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int taille = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau non trié : ");
    afficher_tableau(arr, taille);

    tri_fusion(arr, 0, taille - 1);

    printf("\nTableau trié : ");
    afficher_tableau(arr, taille);

    return 0;
}
