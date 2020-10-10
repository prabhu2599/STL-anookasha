#include <stack>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <numeric>
#include <forward_list>

using namespace std;

void mapFliter(){
    vector<int> v = {1,2,3,4,6,5,7};
    vector<int> vout;
    transform(v.begin(),v.end(),back_inserter(vout), [](int& value) 
                                                { return value * 3;});
    for(auto & val:vout) {
        cout<<val<<endl;
    }

    vector<int>::iterator endfl = remove_if(vout.begin(),vout.end(), [](int& value) {
        if(value%2 == 0) {
            return true;
        }
        return false;
    });
    cout<<"#$%^&*"<<endl;
    for(auto itr = vout.begin(); itr != endfl ; itr++) {
        cout<<*itr<<endl;
    }
}
void reduceKaro() {
    vector<int> v = {1,2,3,4,6,5,7};
    vector<int> vout;
    transform(v.begin(),v.end(),back_inserter(vout), [](int& value) 
                                                { return value * 3;});
    for(auto itr = vout.begin(); itr != vout.end() ; itr++) {
        cout<<*itr<<endl;
    }
    cout<<endl;

    int fval = accumulate(vout.begin(),vout.end(),0,[](int f, int s){
        return(f+s);
    });
    cout<<fval<<" out of reduceKaro";
}

int main() {
    //mapFliter();
    reduceKaro();
    return 69;
}
