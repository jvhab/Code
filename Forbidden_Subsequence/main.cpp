#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
	string s;
	cin >> s;
	string s2;
	cin >> s2;
	int c{}, b{};
	string res;
	sort(s.begin(), s.end());
	vector<int> cnt(26, 0);
	for (auto x : s)cnt[x - 'a']++;
	if (s2 != "abc" || !cnt[0] || !cnt[1] || !cnt[2])cout << s << "\n";
	else {
		while (cnt[0]--)cout << "a";
		while (cnt[2]--)cout << "c";
		while (cnt[1]--)cout << "b";
		for (int i = 3; i < 26; ++i) {
			while (cnt[i]--)cout << char('a' + i);
		}
		cout << "\n";
	}
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