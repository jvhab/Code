#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		set<int> st;
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		int min_el = *min_element(v1.begin(), v1.end());
		int temp{};
		for (auto i : v1)
			if (i == min_el)
				temp++;
		cout << n - temp << "\n";
	}

	return 0;
}