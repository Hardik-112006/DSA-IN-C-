#include <iostream>
using namespace std;

int cube(int num){
    return num*num*num;
}


int main(){
    int n;
    cin >> n;

    cout << (cube(n));
}