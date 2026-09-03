#include <iostream>
using namespace std;

int product(int arr[],int index,int n){
    if(index == n){
        return 1;
    }

    return arr[index] * product(arr,index+1,n);
}

int main(){
    int arr[]={1,2,3,4,5};

    cout << product(arr,0,5);
}