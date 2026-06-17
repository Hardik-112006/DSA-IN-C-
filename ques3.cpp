#include <iostream>
using namespace std;

int main(){
    float principal,rate,time;
    float SimpleInterest;

    cout << "Enter the principal amount:";
    cin >> principal;

    cout << "Enter the rate of interest:";
    cin >> rate;

    cout << "Enter the time:";
    cin >> time;

    SimpleInterest = (principal * rate * time)/100;

    cout << "SimpleInterest is :"<< SimpleInterest;
}