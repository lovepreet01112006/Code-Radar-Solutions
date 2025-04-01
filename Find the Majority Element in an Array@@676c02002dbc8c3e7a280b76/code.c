#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_freq = 0;         // Maximum frequency found
    int max_element = arr[0]; // Element with maximum frequency
    int all_same = 1;         // Flag to check if all frequencies are the same

    // Traverse the array to calculate the frequency of each element
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) {
            continue; // Skip the elements that have already been counted
        }

        int count = 1;  // Initialize the count for this element

        // Count how many times arr[i] appears in the array
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;      // Increment count for matching elements
                arr[j] = -1;  // Mark the element as counted
            }
        }

        // If we found an element with a higher frequency, update the max frequency and element
        if (count > max_freq) {
            max_freq = count;
            max_element = arr[i];
            all_same = 0;  // If we find a higher frequency, not all are the same
        }
        // If the current frequency matches the max frequency, set all_same to 1
        else if (count == max_freq) {
            all_same = 1;
        }
    }

    // If all frequencies are the same, print -1
    if (all_same) {
        printf("-1\n");
    }
    else {
        printf("%d\n", max_element);  // Print the element with the highest frequency
    }

    return 0;
}
