#include<iostream>
using namespace std;

template <class T1, class T2>
class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b){  //T1, T2 can also be a class
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<data1<<endl<<data2;
    }
};

int main(){
    myClass <int, float> obj(21,4.5);
    obj.display();
    
    return 0;
}