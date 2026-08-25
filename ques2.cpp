#include <iostream>
using namespace std;

int poweroffour(int n,int i){
    if(i == 1){
        return 4;
    }

    return 4 * poweroffour(4,i-1);

}

int main(){
   int i;
   cin >> i;
    cout << poweroffour(4,i);

}