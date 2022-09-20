#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v1(n);
	vector<int> ans;
	unordered_set<int> st;
	for (auto& i : v1) {
		cin >> i;
	}
	for (int i = n - 1; i >= 0; --i) {
		if (st.find(v1[i]) == st.end()) {
			st.insert(v1[i]);
			ans.push_back(v1[i]);
		}
	}
	cout << ans.size() << "\n";
	reverse(ans.begin(), ans.end());
	for (auto i : ans)
		cout << i << " ";
	return 0;
}