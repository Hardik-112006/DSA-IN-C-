#include <iostream>
using namespace std;

int counteven(int arr[],int index,int n){
    if(index == n){
        return 0;
    }
    if(arr[index]%2==0){
        return 1+counteven(arr,index+1,n);
    }
    else{
        return counteven(arr,index+1,n);
    }
}

int main(){
    int arr[]={1,2,4,7,8};
    cout << counteven(arr,0,5);
}