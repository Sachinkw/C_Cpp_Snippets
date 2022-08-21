#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// ***
// **
// *
//Below code will not work properly for even no of rows!!!!
int main(){
    int i,j,k=0,rows;
    cout<<"enter only odd no of rows: ";
    cin>>rows;
    for (i=1; i <= rows; i++){
        if (i<=(rows+1)/2) k++;
        else k--;
        for (j = 1; j <= (rows+1)/2; j++)
        {
            if (j<=k)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}