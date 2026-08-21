#include <iostream>
using namespace std;

void print(int n){
    if(n==0)
    return;
    else
    cout << "Coder Army" << endl;
    print(n-1);
}

int main(){
    print(10);
}