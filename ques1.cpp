#include <iostream>
using namespace std;

int main(){
    int i,j;
    bool val = true;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
          cout << val;
          val = !val;
        }
        cout << endl;
    }
}