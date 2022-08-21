#include<iostream>
using namespace std;

// 1
// 6 2
// 10 7 3
// 13 11 8 4
// 15 14 12 9 5

int main(){
    int i,j,rows,k=1,d,val;
    cout<<"Enter no. of lines: ";
    cin>>rows;
    for (i=1; i <= rows; i++){
        d=0; val=k;
        for (j = 1; j <= rows; j++)
        {
            if (j<=i){
                val = val-d;
                cout<<val<<" ";
                d = rows-i+j;}
            else
                cout<<"  ";

        }
        k = k+rows-i+1;
        cout<<endl;
    }
    return 0;
}