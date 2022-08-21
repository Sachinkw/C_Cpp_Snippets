#include<iostream>
using namespace std;

//                      0
//                    1 2 1
//                  2 3 4 3 2
//                3 4 5 6 5 4 3
//              4 5 6 7 8 7 6 5 4
//            5 6 7 8 9 0 9 8 7 6 5
//          6 7 8 9 0 1 2 1 0 9 8 7 6
//        7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
//      8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8
//    9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
//  0 1 2 3 4 5 6 7 8 9 0 9 8 7 6 5 4 3 2 1 0
//    9 0 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 0 9
//      8 9 0 1 2 3 4 5 6 5 4 3 2 1 0 9 8
//        7 8 9 0 1 2 3 4 3 2 1 0 9 8 7
//          6 7 8 9 0 1 2 1 0 9 8 7 6
//            5 6 7 8 9 0 9 8 7 6 5
//              4 5 6 7 8 7 6 5 4
//                3 4 5 6 5 4 3
//                  2 3 4 3 2
//                    1 2 1
//                      0

int main(){
    int i,j,k=0,n=0;
    for (i=1; i <= 21; i++){
        if(i<=11) k++;
        else k--;
        for (j = 1; j <= 21; j++)
        {
            if (j>=12-k && j<=10+k){

                if(i<=11) cout<<" "<<n%10;  //Conditions for printing of integers
                else cout<<" "<<(n-2)%10;

                if (j<11 || (j==10+k && i<=11)) n++; //Condtions for increment or decrement of integers
                else n--;} 
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}