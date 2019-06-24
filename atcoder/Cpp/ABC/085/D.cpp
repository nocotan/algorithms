#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> sieve_of_eratosthenes(int n)
{
    vector<int> primes(n);
    for (int i=2; i<n; ++i)
        primes[i] = i;
    for (int i=2; i*i<n; ++i)
        if (primes[i])
            for (int j=i*i; j<n; j+=i)
                primes[j] = 0;

    primes.erase(remove(primes.begin(), primes.end(), 0), primes.end());
    return primes;
}

auto primes = sieve_of_eratosthenes(100001);

int memo[100001];

signed main() {
    int q;
    cin >> q;

    int l, r;
    for(int i=0; i<q; ++i) {
        cin >> l >> r;
        int cnt = 0;
        for(int t=l; t<=r; t+=2) {
            if(!memo[t]&&find(primes.begin(), primes.end(), t)==primes.end()) continue;
            memo[t]++;
            if(memo[t+1]||find(primes.begin(), primes.end(), (t+1)/2)!=primes.end()) {
                cnt++;
                memo[t+1];
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

