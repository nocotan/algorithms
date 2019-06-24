// B - 編集
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, Q, L, R, T;
  cin >> N >> Q;

  vector<int> v(N);

  for(int i=0; i<Q; i++) {
    cin >> L >> R >> T;
    for(int j=L-1; j<R; j++) {
      v.at(j) = T;
    }
  }

  for (auto it = v.begin(); it < v.end(); it++) {
    cout << *it << endl;
  }

  return 0;
}
