#include <iostream>
#include <string>
#include <queue>
using namespace std;

char field[101][10];

void search(int x, int y) {
    while(true) {
        if(field[x][y]!='o') break;
        field[x][y] = '.';
        x++;
    }
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for(int i=0; i<n; ++i) {
        string s;
        cin >> s;
        for(int j=0; j<s.size(); ++j) {
            if(s[j]=='x') ans++;
            field[i][j] = s[j];
        }
    }

    for(int i=0; i<9; ++i) {
        for(int j=0; j<n; ++j) {
            if(field[j][i]=='o') {
                ans++;
                search(j, i);
            }
        }
    }
    cout << ans << endl;
}
