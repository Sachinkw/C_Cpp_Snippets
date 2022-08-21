#include<iostream>
using namespace std;

//    A
//   ABA
//  ABCBA
// ABCDCBA


int main(){
    int i,j;
    char k;
    for (i=1; i <= 4; i++){
        k='A';
        for (j = 1; j <= 7; j++)
        {
            if (j>=5-i && j<=i+3){
                cout<<k;
                if (j<4) k++;
                else k--;}
            else
                cout<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}