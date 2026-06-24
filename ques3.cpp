#include <iostream>
using namespace std;

void swap(int &n1,int &n2,int &n3){
    int temp;
    temp = n1;
    n1 = n3;
    n3 = n2;
    n2 = temp;
}


int main(){
    int a,b,c;
    cin >> a >> b >> c;

    swap(a,b,c);
    cout << a  << " " << b  << " "  << c ;
}