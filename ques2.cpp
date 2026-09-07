#include <iostream>
using namespace std;

void revarr(int arr[], int left, int right){
    if(left >= right){
        return;
    }
    swap(arr[left], arr[right]);
    revarr(arr, left + 1, right - 1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    revarr(arr,0,4);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
}