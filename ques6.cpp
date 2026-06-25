#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int i;
    int min = INT_MAX;

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
            if(arr[i] < min){
                min = arr[i];
            }
        }

        cout << "The smallest element in the array is: " << min << endl;
        int min2 = INT_MAX;
        for(i=0;i<size;i++){
            if(min != arr[i]){
                if(arr[i] < min2){
                    min2 = arr[i];
                }
            }
        }

        cout << "The second smallest element in the array is: " << min2 << endl;

        int min3 = INT_MAX;
        for(i=0;i<size;i++){
            if(min2 != arr[i] && min != arr[i]){
                if(arr[i] < min3){
                    min3 = arr[i];
                }
            }
        }

        cout << "The third smallest element in the array is: " << min3 << endl;

    }
}