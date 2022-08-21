#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Harry{
    public:
    T1 a;
    T2 b;
    T3 c;
    Harry(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(){
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
};

int main(){
    Harry<> h1(21, 34.3, 'g');
    h1.display();
    cout<<endl;
    Harry<float, char, char> h2(34.3, 'g', 'j');
    h2.display();
}