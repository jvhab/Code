#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		vector<int> a(4);
		for(auto& i : a)
			cin >> i;
		int res{};
		for (int i = 1; i < 4; ++i) {
			if (a[i] > a[0])
				res++;
		}
		cout << res << "\n";
		
	}
	return 0;
}