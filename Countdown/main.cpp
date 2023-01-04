#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	long long n;
	cin >> n;
	long long res{0};
	string s;
	cin >> s;
	for (int i = n - 1; i >= 0; ) {
		if (s[i] != '0' && i == n - 1) {
			res += (int)(s[i] - '0');
			s[i] = '0';
		}
		else if (s[i] != '0' && i != n - 1) {
			res++;
			res += (int)(s[i] - '0');
			s[i] = '0';
		}
		i--;
		
	}
	cout << res << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}