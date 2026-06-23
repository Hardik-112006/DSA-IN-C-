#include <iostream>
using namespace std;

int main(){
    int i,j;

    for(i=1;i<=5;i++){
        //spaces
       for(j=1;j<=5-i;j++){
        cout << " ";
       }
       // stars
       for(j=1;j<=5;j++){
        cout << "*";
       }
       cout << endl;

    }
}