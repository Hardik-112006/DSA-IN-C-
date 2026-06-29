#include <iostream>
using namespace std;

int main(){
    int i,j;
    int row,col;
    int arr1[100][100];
    int arr2[100][100];
    int arr3[100][100];

    cout << "Enter the number of row:";
    cin >> row;

    cout << "Enter the number of col:";
    cin >> col;

    cout << "Enter the" << row * col << "elements:";



    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
         cin >> arr1[i][j];
        }
    }

     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
         cin >> arr2[i][j];
        }
    }





    cout << "The original matrix is:";

     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
         cout << arr1[i][j];
        }
    }
    
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
         cout << arr2[i][j];
        }
    }

    
for(i=0;i<row;i++){
        for(j=0;j<col;j++){
         arr3[i][j] = arr1[i][j] - arr2[i][j]; 
        }
    }

    cout << "The result matrix is:";
    
    
  for(i=0;i<row;i++){
        for(j=0;j<col;j++){
         cout << arr3[i][j];
        }
    }
   
}