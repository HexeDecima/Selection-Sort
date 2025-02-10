#include <stdio.h>

// Get ints from user sequentially and store them in an array.
// Use selection sort to sort the array:
// 1. Find the largest number and move it at the end.
// 2. Repeat recusrsively with n - 1.

void selection_sort(int unsorted[], int arr_size);

int main() {
    int user_arr_size;

    printf("Enter array size: ");
    scanf("%d", &user_arr_size);
    int user_array[user_arr_size];

    // Get numbers for the array
    for (int i = 0; i < user_arr_size; i++) {
        printf("Enter number: ");
        scanf("%d", &user_array[i]);
    }

    // Call the function
    selection_sort(user_array, user_arr_size);
    // Print array
    for (int i = 0; i < user_arr_size; i++) {
        printf("Sorted array [%d] is %d\n", i, user_array[i]);
    }
    return 0;
}

void selection_sort(int unsorted[], int arr_size) {
    if (arr_size <= 1) return;
    int last_index = arr_size - 1;
    int largest_index = arr_size - 1;

    // Find the largest number
    for (int i = arr_size - 1; i >= 0; i--) {
        if (unsorted[i] >= unsorted[largest_index]) largest_index = i;
        else continue;
    }
    // Swap largest with n - 1
    if (last_index != largest_index) {
        unsorted[last_index] = unsorted[last_index] + unsorted[largest_index];
        unsorted[largest_index] = unsorted[last_index] - unsorted[largest_index]; // largest_index now has the original value of last_index
        unsorted[last_index] = unsorted[last_index] - unsorted[largest_index]; // The sum minus the new value of largest_index
    }
    // Call recursively
    selection_sort(unsorted, last_index);
}
