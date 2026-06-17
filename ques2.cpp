#include <iostream>
using namespace std;

int main(){
    float pencil,pen,eraser;
    float totalcost;
  
    cout << "Enter cost of pencil:";
    cin >> pencil;

    cout << "Enter cost of pen:";
    cin >> pen;

    cout << "Enter cost of eraser:";
    cin >> eraser;

    totalcost = (0.18 * (pencil + pen + eraser)) + (pencil + pen + eraser);
  
    cout << "Total cost of 3 items including Gst of 18% is:"<< totalcost;

}