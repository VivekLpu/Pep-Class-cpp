#include <iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter the number of rows: ";
    cin>> rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;

    int matrix1[rows][columns],matrix2[rows][columns],result[rows][columns];

    cout<<"Enter the elements of first matrix: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>matrix1[i][j];
        }
    }

    cout <<"Enter the elements of second matrix: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>matrix2[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout<<"Addition of Matrix: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<< result[i][j]<<" ";
        }
        cout<<endl;
    }
}