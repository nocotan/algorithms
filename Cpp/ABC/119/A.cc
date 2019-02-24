#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int main() {
  string s;
  cin >> s;

  if(stoi(s.substr(5, 2)) <= 4 && stoi(s.substr(8, 2)) <= 30) {
    cout << "Heisei" << endl;
  } else {
    cout << "TBD" << endl;
  }
  return 0;
}
