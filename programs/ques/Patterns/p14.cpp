#include<iostream>
using namespace std;

//     1
//    12
//   123
//  1234
// 12345
//  1234
//   123
//    12
//     1

int main(){
    int i,j,k;
    for (i=1; i <= 9; i++)
    {
        k = 1;
        for (j = 1; j <= 5; j++)
        {
            if ((j>=6-i && 6-i>0) || (j>=i-4 && i-4>0)){
                cout<<k;
                k++;}
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}