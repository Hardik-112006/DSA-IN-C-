#include <iostream>
using namespace std;

int reverse(int n){
    int rem,ans=0;
    if(n>5000){
        return 0;
    }
    else{
        while(n!=0){
            rem = n % 10;
            ans = ans * 10 + rem;
            n = n / 10;
        }
    }
    return ans;
}

int main(){
    int num;
    cin >> num;

    cout << reverse(num);
}