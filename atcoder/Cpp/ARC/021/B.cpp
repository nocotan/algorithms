#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 
int a[114514];
int b[114514];
int main() {
    int n;
    cin >> n;
 
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans ^= a[i];
    }
    if (ans)puts("-1");
    else {
        a[n] = a[0];
        for (int i = 1; i <= n; i++) {
            b[i] = a[i - 1] ^ b[i - 1];
        }
        for (int i = 0; i < n; i++)cout << b[i] << endl;
    }
}
