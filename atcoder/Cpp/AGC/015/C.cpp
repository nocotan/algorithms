//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;

#define int long long

class NumMatrix {
public:
    NumMatrix(vector<vector<int>> &matrix) {
        if (matrix.empty() || matrix[0].empty()) return;
        mat.resize(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));
        bit.resize(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                update(i, j, matrix[i][j]);
            }
        }
    }

    void update(int row, int col, int val) {
        int diff = val - mat[row + 1][col + 1];
        for (int i = row + 1; i < mat.size(); i += i&-i) {
            for (int j = col + 1; j < mat[i].size(); j += j&-j) {
                bit[i][j] += diff;
            }
        }
        mat[row + 1][col + 1] = val;
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return getSum(row2 + 1, col2 + 1) - getSum(row1, col2 + 1) - getSum(row2 + 1, col1) + getSum(row1, col1);
    }
    int getSum(int row, int col) {
        int res = 0;
    }
private:
    vector<vector<int>> mat;
    vector<vector<int>> bit;
};

auto main() -> signed {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int> > v;
    for(int i=0; i<n; ++i) {
        string s;
        cin >> s;
        vector<int> t;
        for(int j=0; j<m; ++j) {
            t.push_back(s[j]-'0');
        }
        v.push_back(t);
    }

    NumMatrix st(v);

    int x1, y1, x2, y2;
    for(int i=0; i<q; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;
        y1--;
        x2--;
        y2--;
        cout << st.sumRegion(x1, y1, x2, y2) << endl;
    }
    return 0;
}

