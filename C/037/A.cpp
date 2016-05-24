// A-饅頭
#include <iostream>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  if (A < B) {
    cout << C / A << endl;
  } else {
    cout << C / B << endl;
  }

  return 0;
}
