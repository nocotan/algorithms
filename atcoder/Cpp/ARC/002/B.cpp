//#define _GRIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;


int month[]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
auto main() -> signed {
    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);
    while(true) {
        if(!(y%m)&&!((y/m)%d)) break;
        bool uru = false;
        if(!(y%4)) uru = true;
        if(!(y%100)) uru = false;
        if(!(y%400)) uru = true;
        if(uru) month[2] = 29;
        else month[2] = 28;
        d++;
        if(d>month[m]) {
            d = 1;
            m++;
            if(m>12) {
                m=1;
                y++;
            }
        }
    }
    printf("%4d/%02d/%02d\n", y, m, d);
    return 0;
}

