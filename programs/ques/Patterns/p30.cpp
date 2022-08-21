#include<iostream>
using namespace std;

//  *       *
//    *   *
//      *
//    *   *
//  *       *

int main(){
    int i,j,rows;
    cout<<"Enter the no. of rows you want to display: ";
    cin>>rows;
    for(i=1; i<=rows; i++){
        for(j=1; j<=rows; j++){
            if(j==i || j==rows+1-i)
                cout<<" *";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}