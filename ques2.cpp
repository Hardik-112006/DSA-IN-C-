#include <iostream>
using namespace std;

int max(int arr[],int index,int n){
    if(index == n-1){
        return arr[index];
    }

    return max(arr[index],max(arr,index+1,n));
}

int main(){
    int arr[]={7,2,4,1,6};

    cout <<max(arr,0,5);
}