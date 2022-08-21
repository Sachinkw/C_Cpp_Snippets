#include<iostream>
using namespace std;

// ABCDEFG
// ABC EFG
// AB   FG
// A     G

int main(){
    int i,j;
    char k;
    for (i=1; i <= 4; i++){
        k = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j<6-i || j>=3+i)
                cout<<k;
            else
                cout<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}