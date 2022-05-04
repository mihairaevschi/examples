#include <stdio.h>
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main() {
    int arr[100], n;
    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("A[%d]= ", i);
        scanf("%d", &arr[i]);
    }
  printf("Array-ul original\n");
  printArray(arr, n);
  quickSort(arr, 0, n - 1);
  printf("Array-ul modificat: \n");
  printArray(arr, n);
}