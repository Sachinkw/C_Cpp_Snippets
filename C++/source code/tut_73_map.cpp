//Map is an associative array
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string, int> marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    marksMap.insert({{"Hathodi", 100},{"Anderson", 39}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    } //begin() is a method of iterator which returns an iterator to beginning
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The emptty return value is: "<<marksMap.empty()<<endl;


}


