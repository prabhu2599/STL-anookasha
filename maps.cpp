#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

bool rev(int x,int y) {
    return x>y;
}

void mapApna() {
    char x = 'a';
    map<char, int> s;
    s['a'] = 1;
    s['1'] = 12;
    s['r'] = 3;
    s['e'] = 99;

    map<char ,int> cnt;
    string str = "hey there ye hai prabhu";

    for(char i : str) {
        cnt[i]++;
    }
    cout<<cnt[x];

}

int main() {
    mapApna();
    cout<<endl;
    return 1;
}
