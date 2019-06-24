#include <string>
#include <vector>
#include <iostream>
using namespace std;
#define int long long

auto main() -> signed {
    string s;
    vector<string> v;
    while(cin>>s) {
        if(s=="Left") v.push_back("<");
        else if(s=="Right") v.push_back(">");
        else v.push_back("A");
    }
    for(int i=0; i<v.size(); ++i) {
        if(i==0) cout << v[i];
        else cout << " " << v[i];
    }
    cout << endl;
}
