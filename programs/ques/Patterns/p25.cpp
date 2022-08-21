#include<iostream>
using namespace std;

//    1
//   212
//  32123s
// 4321234

int main(){
    int i,j,k;
    for (i=1; i <= 4; i++){
        k=i;
        for (j = 1; j <= 7; j++)
        {
            if (j>=5-i && j<=i+3){
                cout<<k;
                if(j<4) k--;
                else k++;}
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}