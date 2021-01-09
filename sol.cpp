#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r, k;
		cin >> l >> r >> k;
		// just imagine a number line
		// look at the image in this repository for better understanding
		if (l == r) {
			// if l == r, then there are no infinite number of distinct values between the given interval
			// just print 1
			cout << 1;
		} else {
			// if l != rm then there are infinite number of distinct values between the given interval
			cout << k;
		}
		cout << '\n';
	}
	return 0;
}
