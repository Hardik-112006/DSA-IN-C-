#include <iostream>
using namespace std;

int main(){
    int i,j;

    for(i=1;i<=5;i++){
       //spaces
    for(j=1;j<=5-i;j++){
        cout << " ";
    }
    // nums backward
    for(j=i;j>=1;j--){
      cout << j;
    }
    // nums forward
    for(j=2;j<=i;j++){
      cout << j;
    }
    cout << endl;
    }
}