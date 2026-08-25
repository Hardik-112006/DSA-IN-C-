#include <iostream>
using namespace std;

int cubesum(int n){
    if(n == 1){
        return 1;
    }
    return n*n*n + cubesum(n-1);
}

int main(){
    int N;
    cin >> N;

   cout << cubesum(N);
}