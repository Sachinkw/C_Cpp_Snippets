#include<iostream>
using namespace std;

float funcAverage(int a, int b){
    float avg = (a+b)/2.0;
    return avg;
}

float funcAverage2(int a, float b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class T1, class T2>
float funcAverage3(T1 a,T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp; 
}

int main(){
    float a = funcAverage3(21.695,22.6);
    printf("The average of the nos is %.4f\n\n",a);
    string x = "good", y = "morning";
    swapp(x,y);
    cout<<x<<endl<<y;

}