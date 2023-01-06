#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int l, r;
	cin >> l >> r;
	for (int i = l; i <= r; i++) {
		string s = to_string(i);
		set<char> st;
		for (size_t j = 0; j < s.size(); j++) {
			st.insert(s[j]);
		}
		if (st.size() == s.size()) {
			cout << s << "\n";
			return 0;
		}
	}
	cout << -1 << "\n";
	return 0;
}