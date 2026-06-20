#include <iostream>
using namespace std;

int boundarycircle(int a,int b,int c){
    return ((c+a-2)%5+1);
}


int main(){
    int a,b,c;
    cin >> a >> b >> c;

    cout << boundarycircle(a,b,c);
}