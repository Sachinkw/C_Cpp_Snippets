#include<iostream>
using namespace std;

//     1
//    232
//   34543
//  4567654
// 567898765

int main(){
    int i,j,k, rows;
    cout<<"Enter no of rows: ";
    cin>>rows;

    for (i=1; i <= rows; i++)
    {   k = i;
        for (j = 1; j <= (2*rows-1); j++)
        {
            if (j>=rows+1-i && j<=rows-1+i){
                cout<<" "<<k;
                if(j< rows) k++;
                else k--;
            }
            else
                cout<<"  ";
        }
        // cout<<"*";
        cout<<endl;
    }
    return 0;
}