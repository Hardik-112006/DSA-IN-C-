#include <iostream>
using namespace std;

void table(int N,int i){
    if(i>10){
        return;
    }
     cout << N << " x " << i << " = " << N * i << endl;
     table(N,i+1);
}

int main(){
    int N;
    cin >> N;
    int i = 1;

    table(N,i);
}