#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s1;
	string s2;
	cin >> s1 >> s2;
	int res{};
	for (size_t i = 0; i < n; ++i) {
		if (s2[i] != '0') {
			if (i == 0) {
				if (s1[i] == '0') {
					res++;
					s1[i] = '2';
				}
				else if (s1[i] != '0' && s1[i + 1] == '1') {
					res++;
					s1[i + 1] = '2';
				}
			}
			else {
				if (s1[i - 1] == '1') {
					res++;
					s1[i - 1] = '2';
				}
				else if (s1[i] == '0') {
					res++;
					s1[i] = '2';
				}
				else if (s1[i + 1] == '1') {
					res++;
					s1[i + 1] = '2';
				}
			}
		}
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