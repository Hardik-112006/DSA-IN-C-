#include <iostream>
using namespace std;

int main(){
    int i,j;
    int row,col;
    int arr[100][100];
    int min = INT_MAX;

    cout << "Enter the number of row:";
    cin >> row;

    cout << "Enter the number of col:";
    cin >> col;

    cout << "Enter the" << row * col << "elements:";



    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
         cin >> arr[i][j];
        }
    }

    cout << "The original matrix is:";

     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
         cout << arr[i][j];
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(min>arr[i][j]){
                min = arr[i][j];
            }
        }
    }
    cout << "the largest element in array is:" << min;
}