#include <iostream>
using namespace std;

int main(){
    int arr[20];
     int i;
     int sum = 0;
     float avg;

     cout << "Enter the elements of array:";
    for(i=0;i<18;i++){
        cin >> arr[i];
    }
    
    for(i=0;i<18;i++){
        sum = sum + arr[i];
    }

    avg = sum / 18;

    cout  << "The average of 18 elements using arrays is :" << avg;
}