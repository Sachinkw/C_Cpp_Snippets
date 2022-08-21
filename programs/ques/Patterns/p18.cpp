#include<iostream>
using namespace std;

//    A1
//   AB12
//  ABC123
// ABCD1234


int main(){
    int i,j,n;
    char k;
    for (i=1; i <= 4; i++){
        k='A';
        n =1;
        for (j = 1; j <= 8; j++)
        {
            if (j>=5-i && j<=4){
                cout<<k;
                k++;}
        
            else if (j>=5 && j<=i+4){
                cout<<n;
                n++;}

            else
                cout<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}