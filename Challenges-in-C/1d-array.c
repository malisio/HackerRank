#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;

   
    scanf("%d", &n);

    // Allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error
    }

    // Input elements and calculate sum

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
        
    }

    printf("%d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}
