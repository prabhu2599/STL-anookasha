#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool rev(int x,int y) {
    return x>y;
}

void printIt(vector<int> A) {
    cout<<endl;
    for (int a : A) {
        cout<<a<<" ";
    }
    cout<<endl;
} 

int main(){
    vector<string> naam {"hey","ye","hai","apna"};
    vector<int> A = {3,4,1,5};
    sort(A.begin(),A.end());
    
    for (const string& a : naam) {
        cout<<a<<" - ";
    }
    
    cout<<endl;
    for (int a : A) {
        cout<<a<<" ";
    }
    
    bool present = binary_search(A.begin(),A.end(),2);
    cout<<endl;

    for (auto i = A.rbegin();i != A.rend();++i) { 
        cout<<*i<<" ";
    }
    cout<<present<<endl;

    A.push_back(100);
    printIt(A);

    vector<int>::iterator it = lower_bound(A.begin(),A.end(),4);
    cout<<endl<<*it;

    sort(A.begin(),A.end(),rev);
    printIt(A);

    cout<<endl;
    return 69;
}
//cd "/Users/prabhugantayat/Documents/" && g++ -std=c++11 1.cpp -o 1 && "/Users/prabhugantayat/Documents/"1
