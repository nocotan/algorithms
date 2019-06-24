#include <iostream>
#include <vector>
using namespace std;

int b[2][3];
int c[3][2];

int sum_score;

auto rep(int turn, vector<vector<int> > field) -> int {
    int res = 0;
    if(turn==9) {
        for(int i=0; i<2; ++i) {
            for(int j=0; j<3; ++j) {
                if(field[i][j]==field[i+1][j]) res += b[i][j];
            }
        }
        for(int i=0; i<3; ++i) {
            for(int j=0; j<2; ++j) {
                if(field[i][j]==field[i][j+1]) res += c[i][j];
            }
        }
        return res;
    }
    if(turn%2==0) res = -1;
    else res = 1e+9;
    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            if(field[i][j]!=0) continue;
            auto tmp = field;
            if(turn%2==0) tmp[i][j] = 1;
            else tmp[i][j] = 2;
            if(turn%2==0) res = max(res, rep(turn+1, tmp));
            else res = min(res, rep(turn+1, tmp));
        }
    }

    return res;
}

auto main() -> int {
    for(int i=0; i<2; ++i) {
        for(int j=0; j<3; ++j) cin >> b[i][j];
    }
    for(int i=0; i<3; ++i) {
        for(int j=0; j<2; ++j) cin >> c[i][j];
    }

    for(int i=0; i<2; ++i) {
        for(int j=0; j<3; ++j) sum_score += b[i][j];
    }

    for(int i=0; i<3; ++i) {
        for(int j=0; j<2; ++j) sum_score += c[i][j];
    }

    vector<vector<int> > field(3, vector<int>(3, 0));
    int score = rep(0, field);
    cout << score << endl;
    cout << sum_score-score << endl;
}
