#include <iostream>
#include <string>
#include <set>
using namespace std;

bool rev(int x,int y) {
    return x>y;
}
void printIt(set<int> A) {
    cout<<endl;
    for (int a : A) {
        cout<<a<<" ";
    }
    cout<<endl;
} 

void setApna() {
    set<int> s;
    s.insert(1);
    s.insert(9);
    s.insert(6);
    printIt(s);

    auto it = s.lower_bound(5);
    cout<<*it;
    
}

int main() {
    setApna();
    cout<<endl;
    return 1;
}
