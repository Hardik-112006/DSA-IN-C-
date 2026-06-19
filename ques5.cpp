#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number:";
    cin >> number;

    int number2;
    number2 = number;

    int rem,sum=0;

    if(number2 == 0 || number2 == 1){
        cout << number2;
    }
    else{
    while(number2 != 0){
       rem = number2 % 10;
       sum = sum + (rem*rem*rem);
       number2 = number2 / 10;
    }
    if(sum == number){
      cout << number <<" is an armstrong number";
    }
    else{
        cout << number << " is not an armstrong number";
    }
}
}