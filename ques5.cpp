#include <iostream>
using namespace std;

int main(){
    int i,first,last,n,next;

    cout << "Enter the number:";
    cin >> n;

    first = 0;
    last = 1;

    cout << first << " ";
 
    for(i=1;i<n;i++){
     next = first + last;
     cout << last << " ";

     first = last;
     last = next;
    }

}