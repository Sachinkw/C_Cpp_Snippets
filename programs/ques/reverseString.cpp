#include<iostream>
#include<string.h>
using namespace std;

void reverse(char *str, int l){
    int i=0;
    char temp[l/2];
    while (i <= (l-1)/2)
    {
        temp[i] = str[i];
        str[i] = str[l-1-i];
        str[l-i-1] = temp[i];
        i++;
    }
}


int main(){
    char str[] = "abcdefgh";
    int len ;
    for(len=0; str[len]; len++); //ASCII for null character is zero which is false
    reverse(str, len);
    cout<<str;
    return 0;
}