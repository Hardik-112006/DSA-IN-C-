#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int i;
    int max = INT_MIN;

    if(size <= 3){
    cout << "Size of array should be greater than 3";
    }
    else{
        cout << "Enter the elements of array:";
        for(i=0;i<size;i++){
            cin >> arr[i];
        }

        for(i=0;i<size;i++){
            cout << arr[i] << " ";
        }

        cout << endl;

        for(i=0;i<size;i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }

        cout << "The largest element in the array is: " << max << endl;
        int max2 = INT_MIN;
        for(i=0;i<size;i++){
            if(max != arr[i]){
                if(arr[i] > max2){
                    max2 = arr[i];
                }
            }
        }

        cout << "The second largest element in the array is: " << max2 << endl;

    }
}