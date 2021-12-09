#include <iostream>
#include "Double_list.cpp"
#include "Double_node.cpp"
using namespace std;



int main(){
    Double_list<int> d1;
    cout << d1.empty() << endl;
    cout << d1.size() << endl;
    try{
        if(d1.empty())
            throw "underflow";
        cout << d1.front();
    }catch(const char *e){
        cout << e << endl;
    }
    try{
        if(d1.empty())
            throw "underflow";
        cout << d1.back(); 
    }catch(const char *e){
        cout << e << endl;
    }
    cout << d1.head() << endl;
    cout << d1.tail() << endl;
    return 0;
}