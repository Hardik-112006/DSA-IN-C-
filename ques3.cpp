#include <iostream>
using namespace std;

int main(){
    int i,j,index=0;
    int arr[100];
    int size;

    cout << "Enter the size of array:";
    cin >> size;

    cout << "Enter the elements of array:";

    for(i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "The Array before sorting in ascending order is:";

    for(i=0;i<size;i++){
        cout << arr[i]  << " " << endl;
    }

    for(i=size-1;i>0;i--){
        index = 0;
        for(j=1;j<=i;j++){
            if(arr[j] > arr[index]){
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }

    cout << "The Array after sorting in ascending order is:";

    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}