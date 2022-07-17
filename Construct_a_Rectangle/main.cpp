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
		vector<int> v1(3);
		for (auto& i : v1)
			cin >> i;
		sort(v1.begin(), v1.end(), [](int it, int it2) {return it > it2; });
		if (v1[0] == v1[1] + v1[2])
			cout << "YES" << "\n";
		else {
			if (v1[0] == v1[1])
				if (v1[2] % 2 == 0)
					cout << "YES" << "\n";
				else
					cout << "NO" << "\n";
			else if (v1[1] == v1[2])
				if (v1[0] % 2 == 0)
					cout << "YES" << "\n";
				else
					cout << "NO" << "\n";
			else
				cout << "NO" << "\n";
		}

	}
	return 0;
}