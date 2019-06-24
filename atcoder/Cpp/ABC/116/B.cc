#include <bits/stdc++.h>
using namespace std;


int d[1000001];

int main() {
  int s;
  cin >> s;

  ++d[s];

  int a = s;
  int m = 1;
  while(true) {
    ++m;
    a = a%2==0 ? a/2 : 3*a+1;
    if(d[a] > 0) {
      break;
    }

    ++d[a];
  }

  cout << m << endl;
}
