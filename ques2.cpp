#include <iostream>
using namespace std;

void odd(int n){
    if(n == 0){
        return;
    }
    else if(n % 2 != 0){
        cout << n << endl;
    }
    odd(n - 1);
}

int main(){
    int n;
    cin >> n;

    odd(n);
}