#include <iostream>
using namespace std;

void printodd(int N){
    if(N == 1){
        cout << 1 << endl;
        return;
    }
    printodd(N-2);
    cout << N << endl;
}

int main(){
    int N;
    cin >> N;

    if(N % 2 == 0){
        N--;
    }
    printodd(N);
}