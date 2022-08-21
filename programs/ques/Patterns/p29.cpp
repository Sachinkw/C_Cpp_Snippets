#include<iostream>
using namespace std;

//     1
//    A B
//   1 2 3
//  A B C D
// 1 2 3 4 5

int main(){
    int i,j,rows,n,p;
    char k;
    cout<<"Enter the no. of rows you want to display: ";
    cin>>rows;
    for(i=1; i<=rows; i++){
        n=1; k='A'; 
        p=1;
        for(j=1; j<=(2*rows-1); j++){
            if(j>=rows+1-i && j<=i+rows-1){
                if(p){
                    if(i%2==1) cout<<n++;
                    else cout<<k++;
                }
                else cout<<" ";
                p = 1-p;
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}