#include <iostream>
using namespace std;

int main(){
    int n,i;

    cout<<"Enter the number:";
    cin >> n;


    if(n < 0){
       cout << "Negative number entered";
    }
   else if(n == 0 || n == 1){
        cout << "1";
    }
    else{
    int fact = 1;
    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    cout << " Factorial of " << n << " is: " << fact;
    }
}