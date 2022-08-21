#include<iostream>
using namespace std;

//    1
//   12A
//  123AB
// 1234ABC


int main(){
    int i,j,n;
    char k;
    for (i=1; i <= 4; i++){
        k='A';
        n =1;
        for (j = 1; j <= 7; j++)
        {
            if (j>=5-i && j<=4){
                cout<<n;
                n++;}
        
            else if (i!=1 && j>=5 && j<=i+3){
                cout<<k;
                k++;}

            else
                cout<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}