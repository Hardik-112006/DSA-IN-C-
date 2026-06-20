#include <iostream>
using namespace std;


int factorial(int n){
    int i ,fact = 1;
    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n,r;
    cin >> n >> r;

    factorial(n);
    factorial(r);
    factorial(n-r);

    cout << factorial(n) / (factorial(r) * factorial(n-r));
}