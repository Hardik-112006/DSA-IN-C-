#include <iostream>
#define PI 3.14 
using namespace std;

int main(){
    float radius;
    float area;

    cout << "Enter the radius:";
    cin >> radius;

   area = PI * radius * radius;

   cout << "Area of a circle is:" << area;
}