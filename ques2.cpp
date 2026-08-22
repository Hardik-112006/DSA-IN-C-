#include <iostream>
using namespace std;

void print(int N){
    if(N == 10){
        cout << 10 << endl;
        return;
    }
    print(N-1);
    cout << N << endl;
}

int main(){
    int N;
    cin >> N;

    print(N);
}