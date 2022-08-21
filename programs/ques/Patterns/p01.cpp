#include<iostream>
using namespace std;

// |*| | | | |
// |*|*| | | |
// |*|*|*| | |
// |*|*|*|*| |
// |*|*|*|*|*|

/* 
1. Put the entire pattern in rows and columns as shown in fig and let i represent rows and j represent columns
2. Look at the pattern and try to find-- where we have to print stars and where we have to print white spaces
3. Design a condition b/w such i and j, use it with if else.
4. if condition b/w i and j satisfies, print that fuckin star, otherwise print that beautiful white space.
*/

int main(){
    int i,j;
    for (i=1; i <= 5; i++){
        for (j = 1; j <= 5; j++)
        {
            if (j<=i)
                cout<<"* ";  
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}