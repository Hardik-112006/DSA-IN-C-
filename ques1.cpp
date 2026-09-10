#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {

    int left = start;
    int right = mid + 1;
    int index = 0;

    int temp[end - start + 1];

    // Compare left and right arrays
    while (left <= mid && right <= end) {

        if (arr[left] <= arr[right]) {
            temp[index] = arr[left];
            left++;
        }
        else {
            temp[index] = arr[right];
            right++;
        }

        index++;
    }

    // Left array elements left
    while (left <= mid) {
        temp[index] = arr[left];
        left++;
        index++;
    }

    // Right array elements left
    while (right <= end) {
        temp[index] = arr[right];
        right++;
        index++;
    }

    // Copy temp back to original array
    index = 0;

    while (start <= end) {
        arr[start] = temp[index];
        start++;
        index++;
    }
}

void mergeSort(int arr[], int start, int end) {

    // Base condition
    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;

    // Sort left half
    mergeSort(arr, start, mid);

    // Sort right half
    mergeSort(arr, mid + 1, end);

    // Merge both halves
    merge(arr, start, mid, end);
}

int main() {

    int arr[] = {6, 4, 7, 2, 9, 8, 3, 5};

    int n = 8;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}