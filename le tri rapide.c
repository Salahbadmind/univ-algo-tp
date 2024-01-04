#include <stdio.h>

// Fonction pour échanger deux éléments
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Fonction pour partitionner le tableau
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choisissez le dernier élément comme pivot
    int i = (low - 1); // Index du plus petit élément

    for (int j = low; j <= high - 1; j++) {
        // Si l'élément courant est plus petit que ou égal au pivot
        if (arr[j] <= pivot) {
            i++; // Incrémente l'index du plus petit élément
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Fonction principale de tri rapide
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Trie les éléments avant et après la partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fonction pour imprimer le tableau
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Programme principal
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Tableau trié : \n");
    printArray(arr, n);
    return 0;
}
