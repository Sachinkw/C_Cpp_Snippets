//Vector:- Resizable array -->automatically resized

#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying vector\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" "; //works similarly
    }
    cout<<endl;
}

int main(){
    //Ways to create a vector:-

    vector<int> vec1; //1). zero length integer vector
    // int element, size;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++){
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // // vec1.pop_back();   //removes an element from the vector.
    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 566);
    // // vec1.insert(iter+1,5,566); //inserts 5 copies of 566
    // display(vec1);

    vector<char> vec2(3);    //2). 4-element vector
    // display(vec2);
    vector<char> vec3(vec2); //3). 4-element vector
    // display(vec3);
    vector<int> vec4(6,45);  //4). 6-element vector of 45s
    display(vec4);
    cout<<vec4.size();


}