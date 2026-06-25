#include <iostream>
using namespace std;

int main(){
    int i;
    char arr[100];
    char ch;

    for(i=1;i<27;i++){
        arr[i] = 'a'+ i - 1;
    }

    for(i=1;i<27;i++){
        cout << arr[i] << " ";
    }
}