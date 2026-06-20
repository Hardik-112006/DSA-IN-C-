#include <iostream>
using namespace std;

 int countBitsFlip(int a, int b) {
        int x,count=0;
        x = a^b;
        while(x!=0){
            if(x&1){
                count++;
            }
            x = x >> 1;
        }
        return count;
    }

int main(){
    int a,b;
    cin >> a >> b;

    cout << countBitsFlip(a,b);
}