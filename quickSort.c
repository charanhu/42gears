#include <stdio.h>

int quickSort(int a[], int low, int high);
int partition(int a[], int low, int high);

int main() {
    int a[1000], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Entering values into array:\n");
    for (i = 1; i <= n; i++) {
        scanf("%d",&a[i]);
        printf("%d ", a[i]);
    }

    quickSort(a, 1, n);

    printf("\nSorted Elements are:\n");
    for (i = 1; i <= n; i++)
        printf("%d ", a[i]);

    return 0;
}

int quickSort(int a[], int low, int high) {
    int j;

    if (low < high) {
        j = partition(a, low, high);
        quickSort(a, low, j - 1);
        quickSort(a, j + 1, high);
    }

    return 0;
}

int partition(int a[], int low, int high) {
    int key = a[low], i = low + 1, j = high, temp;

    for ( ; ; ) {
        while (key >= a[i] && i < high)
            i++;

        while (key < a[j])
            j--;

        if (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        } else {
            temp = a[low];
            a[low] = a[j];
            a[j] = temp;

            return j;
        }
    }
}