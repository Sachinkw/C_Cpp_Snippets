#include<iostream>
using namespace std;

// A
// BA
// CBA
// DCBA


// int main(){
//     int i,j;
//     char k = 'A';
//     for (i=1; i <= 4; i++){
//         for (j = 1; j <= 4; j++)
//         {
//             if (j<=i){
//                 cout<<k;
//                 if(j!=i) k--;         
//             }
//             else
//                 cout<<" ";
//         }
//         cout<<endl;
//         k+=i;
//     }
//     return 0;
// }

// ALTERNATE METHOD
int main(){
    int i,j;
    char k;
    for (i=1; i <= 4; i++){
            k = 64 + i;
        for (j = 1; j <= 4; j++){
            if (j<=i){
                cout<<k--;         
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}