#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream out;
    out.open("sample61.txt");
    out<<"This is me\n";
    out<<"This also is me\n";
    out<<"This is also me\n";
    out<<"This is me also";
    out.close();

    ifstream in;
    string s;
    in.open("sample61.txt");
    // in>>s;
    // cout<<s;
    // in>>s;
    // cout<<s;
    // in.close();

    while (in.eof()==0)
    {
        getline(in, s);
        cout<<s<<endl;        
    }


    return 0;
}