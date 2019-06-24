#include <iostream>
using namespace std;

int c[11][11];

auto extract_number(int& x, int& y, string& dir) -> int {
    int res = c[y][x];
    if(dir=="R") {
        if(x==9) {
            x--;
            dir = "L";
        }
        else x++;
    } else if(dir=="L") {
        if(x==1) {
            x++;
            dir = "R";
        }
        else x--;
    } else if(dir=="U") {
        if(y==1) {
            y++;
            dir = "D";
        }
        else y--;
    } else if(dir=="D") {
        if(y==9) {
            y--;
            dir = "U";
        }
        else y++;
    } else if(dir=="RU") {
        if(x==9&&y==1) {
            x--;
            y++;
            dir = "LD";
        }
        else if(x==9) {
            x--;
            y--;
            dir = "LU";
        }
        else if(y==1) {
            x++;
            y++;
            dir = "RD";
        }
        else {
            x++;
            y--;
        }
    } else if(dir=="RD") {
        if(x==9&&y==9) {
            x--;
            y--;
            dir = "LU";
        }
        else if(x==9) {
            x--;
            y++;
            dir = "LD";
        }
        else if(y==9) {
            x++;
            y--;
            dir = "RU";
        }
        else {
            x++;
            y++;
        }
    } else if(dir=="LU") {
        if(x==1&&y==1) {
            x++;
            y++;
            dir = "RD";
        }
        else if(x==1) {
            x++;
            y--;
            dir = "RU";
        }
        else if(y==1) {
            x--;
            y++;
            dir = "LD";
        }
        else {
            x--;
            y--;
        }
    } else if(dir=="LD") {
        if(x==1&&y==9) {
            x++;
            y--;
            dir = "RU";
        }
        else if(x==1) {
            x++;
            y++;
            dir = "RD";
        }
        else if(y==9) {
            x--;
            y--;
            dir = "LU";
        }
        else {
            x--;
            y++;
        }
    }
    return res;
}

auto main() -> int {
    int x, y;
    string W;
    cin >> x >> y >> W;
    for(int i=1; i<=9; ++i) {
        string s;
        cin >> s;
        for(int j=1; j<=9; ++j) {
            c[i][j] = s[j-1]-'0';
        }
    }
    for(int i=0; i<4; ++i) cout << extract_number(x, y, W);
    cout << endl;
}
