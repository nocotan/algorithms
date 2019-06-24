#include <bits/stdc++.h>

using namespace std;

int n,c[500], s[500], f[500];

void solve(int x) {
	int t = 0;
	for (int i = x; i < n-1; i++) {
		if (t < s[i])t = s[i];
		while (t%f[i] != 0)t++;
		t += c[i];
	}
	cout << t << endl;
}

int main() {
	cin >> n;
	for (int i = 0; i < n-1; i++)cin >> c[i] >> s[i] >> f[i];
	for (int i = 0; i < n-1; i++)solve(i);
	cout << 0 << endl;
	return 0;
}
