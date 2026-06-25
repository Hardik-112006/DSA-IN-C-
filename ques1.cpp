#include <iostream>
using namespace std;

int main(){
    int arr[20];
     int i;
     int sum = 0;

     cout << "Enter the elements of array:";
    for(i=0;i<20;i++){
        cin >> arr[i];
    }
    
    for(i=0;i<20;i++){
        sum = sum + arr[i];
    }

    cout  << "The sum of 20 elements using arrays is :" << sum;
}