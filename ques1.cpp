#include <iostream>
using namespace std;

int sum(int arr[],int index,int n){
    if(index==0){
        return 0;
    }
    else{
        return arr[index-1]+sum(arr,index-1,n);
    }
}

int main(){
    int arr[]={3,4,5,8,2};
    cout << sum(arr,5,5);
}