#include<iostream>
using namespace std;

//          *
//        * *
//      * * *
//      | * *
//  *   |   *
//  * * |
//  * * *
//  * *
//  *

int main(){
    int i,j,n,k;
    cout<<"Enter value of n: ";
    cin>>n;
    for (i = 1; i<=3*n; i++){
        for(j = 1; j<=2*n-1; j++){
            if(i<=n){
                if(j>=2*n-i) 
                    cout<<" *";
                else 
                    cout<<"  ";
                }
            else if(i<=2*n){
                if(j==n) 
                    cout<<" |";
                else if(j<=(i-n-1)) 
                    cout<<" *";
                else if(j>=i) 
                    cout<<" *";
                else 
                    cout<<"  ";
                }
            else if(i<= 3*n){
                if(j<=3*n+1-i) 
                    cout<<" *";
                else 
                    cout<<"  ";
                }
            }
        cout<<endl;
        }
    
    return 0;
}