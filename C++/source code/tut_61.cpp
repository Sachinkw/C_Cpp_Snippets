#include<iostream>
#include<fstream>

using namespace std;

int main(){
// Connecting our file with out stream
    ofstream hout("sample61.txt");
    
// Creating a new string and filling it with the string entered by user
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name; 

// Writing a string to the file
    hout<<name;
    hout.close();

// Reading content of the file
    ifstream hin("sample61.txt");
    string content;
    hin>>content;
    cout<<"The content of this file: "<<content;
    hin.close();
    return 0;
}