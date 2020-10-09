#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> naam {"Yahan","pe","hua","shuru"};

    for (string word : naam)
    {
        cout << word << " ";
    }
    cout << endl;
}
