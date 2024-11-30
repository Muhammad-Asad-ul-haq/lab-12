#include <stdio.h>

void Reverse(int *a, int size) {
    int *start = a;
    int *end = a + (size - 1);

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter the numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }

   

    Reverse(a, size);

    return 0;
}
