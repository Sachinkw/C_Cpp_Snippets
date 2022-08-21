#include<iostream>
using namespace std;

//     *
//    **
//   ***
//  ****
// *****

int main(){
    int i,j;
    //Method 1
    // for (i=1; i <= 5; i++)
    // {
    //     for (j = 5; j >=1; j--)
    //     {
    //         if (j>i)
    //             cout<<" ";
    //         else
    //             cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Method 2
    for (i=1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j>=6-i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}