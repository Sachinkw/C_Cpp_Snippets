#include<iostream>
using namespace std;

//  1
//  3 * 2
//  4 * 5 * 6
//  10 * 9 * 8 * 7
//  11 * 12 * 13 * 14 * 15

int main(){
    int i,j,k=0,n;
    for (i=1; i <= 5; i++){
        if(i%2==1) k+=1;
        else k+=(2*(i-1)); 
        n=k;
        for (j = 1; j <= 9; j++)
        {
            if (j<= 2*i -1){
                if(j%2==0) cout<<" *";
                else{
                    if(i%2==0) cout<<" "<<n--;
                    else cout<<" "<<n++;
                }
            }
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}