#include <stdio.h>
#include <stdlib.h>
void merge(int array[], int l, int m, int r) {
    int i,j,k;
    int number1 = m - l + 1;
    int number2 = r - m;
    int L[number1], R[number2];
    for (i = 0; i < number1; i++)
        L[i] = array[l + i];
    for (j = 0; j < number2; j++)
        R[j] = array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < number1 && j < number2) {
        if (L[i] <= R[j]) {
            array[k] = L[i];
            i++;
        }
        else {
            array[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < number1) {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < number2) {
        array[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int array[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);
    }
}
void printArray(int Arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", Arr[i]);
    printf("\n");
}
int main()
{
    int nr, arr[100];
    printf("Introduceti numarul de elemente al array-ului: ");
    scanf("%d", &nr);
    for(int i = 0; i < nr; i++) {
        printf("Arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    printf("Array-ul original este \n");
    printArray(arr, nr);
    mergeSort(arr, 0, nr - 1);
    printf("\nArray-ul sortat este \n");
    printArray(arr, nr);
    return 0;
}