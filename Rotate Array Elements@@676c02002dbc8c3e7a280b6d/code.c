// Your code here...
#include <stdio.h>

void rotateRight(int arr[], int N, int K);
void printArray(int arr[], int N);

int main() {
    int N;
    scanf("%d", &N);  // Read the size of the array
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Read each element of the array
    }
    
    int K;
    scanf("%d", &K);  // Read the number of positions to rotate
    
    rotateRight(arr, N, K);  // Rotate the array to the right by K positions
    printArray(arr, N);  // Print the rotated array
    
    return 0;
}

void rotateRight(int arr[], int N, int K) {
    K = K % N;  // In case K is larger than N, reduce it to a valid range
    int temp[N];

    // Copy the last K elements to the beginning of the temp array
    for (int i = 0; i < K; i++) {
        temp[i] = arr[N - K + i];  // Last K elements
    }

    // Copy the first N-K elements to the rest of the temp array
    for (int i = 0; i < N - K; i++) {
        temp[K + i] = arr[i];  // First N-K elements
    }

    // Copy the contents of the temp array back to the original array
    for (int i = 0; i < N; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);  // Print each element of the array
    }
    
}