#include <iostream>
#include "Double_list.cpp"
#include "Double_node.cpp"
using namespace std;



int main(){
    Double_list<int> d1;
    cout << d1.empty() << endl;
    cout << d1.size() << endl;
    cout << d1.front() << " " << d1.back() << endl;
    cout << d1.head() << endl;
    cout << d1.tail() << endl;
    return 0;
}
