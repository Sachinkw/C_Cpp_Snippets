//List:- bidirectional 

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin(); it!=lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;     //List of 0 length--no elements--we need to add elements
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    // list1.pop_back(); //removes a last element
    // list1.pop_front(); //removes first element
    // list1.remove(9); //removes all 9 from the list
    list1.sort(); //sorts the elements
    display(list1);

    
    list<int> list2(3);  //empty list of size 7 -- here elements are already present--we need to just set the elements
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    display(list2);
    list2.reverse(); //reverses the list
    display(list2);

    list1.merge(list2); //merges the list 2 to list 1
    display(list1);

}