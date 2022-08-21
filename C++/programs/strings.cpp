# include<iostream>
# include<string>
using namespace std;

void func(string str){
    for(int i=0; i<str.length();i++)
    cout<<str[i]<<endl;
}

int main() {
    string gig = "hello";
    string *ptr = &gig;
    func(gig);
    
    return 0;
}
