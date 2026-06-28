#include <iostream>
using namespace std;

int main(){
    int i,j;
    char arr[100];
    int size;

    cout << "Enter the size of array:";
    cin >> size;

    cout << "Enter the elements of array:";

    for(i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "The Array before sorting in ascending order is:";

    for(i=0;i<size;i++){
        cout << arr[i]  << " ";
    }

    cout << endl;

    for(i=1;i<size;i++){
        for(j=i;j>0;j--){
            if(arr[j] < arr[j-1]){
             swap(arr[j],arr[j-1]);
            }
            else
             break;
        
    }
        }
    cout << "The Array after sorting in ascending order is:";

    for(i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}