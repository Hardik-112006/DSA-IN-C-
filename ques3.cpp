#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int i;
    int searchnum;
    bool isfound = 0;
    int index = 0;
  
    cout << "Enter the elements of array:";
    for(i=0;i<size;i++){
        cin >> arr[i];
    }

    cout << "Enter the element to search in an array:";
    cin >> searchnum;

    for(i=0;i<size;i++){
        if(arr[i] == searchnum){
            isfound = 1;
            index = i;
        }
    }

    if(isfound == 1)
    cout << " Element found at index " << index;
    else
    cout << "-1";
}