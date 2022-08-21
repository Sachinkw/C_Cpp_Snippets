#include<iostream>
using namespace std;

//    1
//   121
//  12321
// 1234321

// Method 1-->
// int main(){
//     int i,j,k;
//     for (i = 1; i <= 4; i++)
//     {
//         k=1;
//         for (j = 1; j <= 7; j++)
//         {
//             if (j>=(5-i) && j<=(3+i)){
//                 if (j==(5-i)||j==(3+i))
//                     cout<<k;
//                 else if (j==(6-i)||j==(2+i))
//                     cout<<k+1;
//                 else if (j==(7-i)||j==(1+i))
//                     cout<<k+2;
//                 else
//                     cout<<k+3;    
//             }
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Method 2
int main(){
    int i,j,k;
    for (i = 1; i <= 4; i++){
        k=1;
        for (j = 1; j <= 7; j++)
        {
            if (j>=(5-i) && j<=(3+i)){
                cout<<k;
                if(j<4) k++;
                else    k--; 
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}