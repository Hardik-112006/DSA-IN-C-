#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter a number:";
    cin >> number;

    if(number > 0){
      cout << "Number is positive";
    }
    else if(number == 0){
      cout << "Number is zero";
    }
    else{
      cout << "Number is negative";
    }
}