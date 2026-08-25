#include <iostream>
using namespace std;

bool isprime(int n,int div){
if(div * div > n){
    return true;
}

if(n % div == 0){
    return false;
}
return isprime(n,div+1);
}


int main(){
    int n;
    cin >> n;

    if(n<2){
        cout <<"not prime";
    }
    else if(isprime(n,2)){
        cout << "prime";
    }
    else{
        cout << "not prime";
    }
}