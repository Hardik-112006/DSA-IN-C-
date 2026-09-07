#include <iostream>
using namespace std;

void rotatearr(int arr[], int index, int n, int temp) {

    
    if (index < 0) {
        arr[0] = temp;
        return;
    }

    arr[index + 1] = arr[index];

    
    rotatearr(arr, index - 1, n, temp);
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};

    int n = 5;
    int temp = arr[n - 1];

    rotatearr(arr, n - 2, n, temp);

    cout << "Rotated array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}