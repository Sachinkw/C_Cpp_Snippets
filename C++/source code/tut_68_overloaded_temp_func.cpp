#include<iostream>
using namespace std;

/*1). member function can we defined outside the class by
        scope resolution operator*/
template<class T>
class harry{
    public:
    T data;
    harry(T a){
        data = a;
    }
    void display();
};

template<class T>
void harry<T>:: display(){
        cout<<data<<endl;
    }
/* 2. overloaded template function*/
void func(int a){
    cout<<"I am first function"<<endl;
}

template<class T>
void func(T x){
    cout<<"I am templatised function"<<endl;
}

int main(){
    // harry<int> h(5.6);
    // cout<<h.data<<endl;
    // h.display();
    int a;
    func(a); //Exact match get highest priority. 
    /*If exact match was not present then template function
    would have been invoked*/
}