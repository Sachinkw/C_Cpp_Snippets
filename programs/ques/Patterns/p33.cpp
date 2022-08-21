#include<iostream>
using namespace std;

//  0
//  0 1
//  0 2 4
//  0 3 6 9
//  0 4 8 12 16

int main(){
    int i,j,rows,k;
    cout<<"Enter no. of rows: ";
    cin>>rows;
    for (i=1; i <= rows; i++){
        for (j = 1; j <= rows; j++){
            k=0;
            if (j<=i)
                cout<<" "<<(k+(i-1)*(j-1));
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}