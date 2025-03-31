// Your code here...
// 
#include <stdio.h>

int main() {
    int N, T;
    scanf("%d", &N);  // Input the number of elements
    int arr[N];  // Declare the array

    // Input the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T);  // Input the target sum T

    // Sort the array (optional, but helps with checking unique pairs easily)
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                // Swap elements to sort the array
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Iterate through all pairs to find the sum T
    for (int j = 0; j < N - 1; j++) {
        for (int k = j + 1; k < N; k++) {
            if (arr[j] + arr[k] == T) {
                // Print the pair only once
                printf("%d %d\n", arr[j], arr[k]);

                // Skip duplicate pairs with the same value
                while (k < N - 1 && arr[k] == arr[k + 1]) {
                    k++;  // Skip duplicates of arr[k]
                }

                break;  // Break the inner loop once a pair is found
            }
        }
    }

    return 0;
}
