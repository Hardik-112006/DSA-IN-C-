#include <iostream>
using namespace std;

int binarysearch(int arr[], int left, int right, int target){
    if(left > right){
        return -1;
    }
    int mid = left + (right - left) / 2;
    if(arr[mid] == target){
        return 1;
    }
    else if(arr[mid] < target){
          return binarysearch(arr, left, mid - 1, target);
    }
    else{
     
         return binarysearch(arr, mid + 1, right, target);
    }
}


int main(){
    int arr[] = {20,15,10,5};
    int target = 1;
    cout << binarysearch(arr,0,3,target);

}