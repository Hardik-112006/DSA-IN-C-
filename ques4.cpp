#include <iostream>
using namespace std;

int main(){
    int i,j,index=0;
    char arr[100];
    int size;

    cout << "Enter the size of array:";
    cin >> size;

    cout << "Enter the elements of array:";

    for(i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "The Array before sorting in descending order is:";

    for(i=0;i<size;i++){
        cout << arr[i]  << " ";
    }

    cout << endl;

    for(i=0;i<size-1;i++){
        index = i;
        for(j=i+1;j<size;j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }

    cout << "The Array after sorting in descending order is:";

    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}