#include<iostream>
using namespace std;

// 1
// 10
// 101
// 1010
// 10101
// 101010

int main(){
    int i,j;
    for (i=1; i <= 6; i++){
        for (j = 1; j <= 6; j++)
        {
            if (j<=i)
                if(j%2==1) cout<<1;
                else cout<<0;
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}