#include <iostream>
using namespace std;

int main(){
    int i;

    int arr[] = {1,2,3,4,5};

    int *ptr = &arr[4];

    for(i=0;i<5;i++){
        cout << *ptr << endl;
        ptr--;
    }
}