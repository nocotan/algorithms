#include <iostream>
using namespace std;
#define int long long

auto is_prime(int n) -> bool {
    if(n==1||n==0) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3; i*i<=n; i+=2) {
        if(n%i==0) return false;
    }
    return true;
}

auto sum_digit(int n) -> int {
    string s = to_string(n);
    int res = 0;
    for(int i=0; i<s.size(); ++i) {
        res += s[i]-'0';
    }
    return res;
}

auto main() -> signed {
    int n;
    cin >> n;
    if(n==1||n==0) cout << "Not Prime" << endl;
    else if(is_prime(n)) cout << "Prime" << endl;
    else if(n%2!=0&&n%5!=0&&sum_digit(n)%3!=0) cout << "Prime" << endl;
    else cout << "Not Prime" << endl;
}
