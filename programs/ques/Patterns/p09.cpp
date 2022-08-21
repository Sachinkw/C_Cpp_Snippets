#include<iostream>
using namespace std;

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

//Method 1: Generalised Method

int main(){
    int i,j, k=0, rows, n;
    cout<<"Enter no. of rows: ";
    cin>>rows;
    n = (rows +1)/2;

    for (i=1; i <= rows; i++){
        if(rows%2 == 0){
            if(i<=n) k++;
            if(i>n+1) k--;}
        else{
            if(i<=n) k++;
            else k--;}
        
        for (j = 1; j <= rows; j++){
            if (j>=(n+1-k)&&j<=(n-1+k))
                cout<<"*";
            else
                cout<<" ";
            }
        cout<<endl;
    }
    return 0;
}


// // Method 2:
// int main(){
//     int i,j;
//     for (i=1; i <= 7; i++)
//     {
//         for (j = 1; j <= 7; j++){
//             if (i<=4){
//             if (j>=(5-i)&&j<=(3+i))
//                 cout<<"*";
//             else
//                 cout<<" ";
//             }
//             else
//             {
//                 if (j>=(i-3)&&j<=(11-i))
//                 cout<<"*";
//             else
//                 cout<<" ";
//             }

//         }
//         cout<<endl;
//     }
//     return 0;
// }