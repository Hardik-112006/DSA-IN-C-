#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int i,n;

    cout << "Enter the number:";
    cin >> n;

    int start = 2,end = n;
   

    for(n=start;n<=end-1;n++){
         bool isPrime = true;
        for(i=2;i<=sqrt(n);i++){
        if(n % i == 0){
         isPrime = false;
         break;
        } 
    }
    if(isPrime){
        cout << n << endl;
    }
    }

}