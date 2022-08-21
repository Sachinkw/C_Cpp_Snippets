#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// *****

int main(){
    int i,j;
    char k = 64, n;
    for (i=1; i <= 5; i++){
        k+=i;
        n = k;
        for (j = 1; j <= 5; j++)
        {
            if (j>=6-i){
                cout<<n--;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}