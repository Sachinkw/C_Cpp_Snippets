#include<iostream>
#include<Windows.h>
using namespace std;

int main(){
    SYSTEMTIME systime;
    GetSystemTime(&systime);
    cout<<systime.wDay<<"/"<<systime.wMonth<<"/"<<systime.wYear;
    return 0;
}