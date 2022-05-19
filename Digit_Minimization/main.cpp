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
		string n;
		cin >> n;
		int a = 1000000000;
		if (n.size() == 2)
			cout << n[1] << "\n";
		else {
			for (size_t i = 0; i < n.size(); ++i) {
				if (n[i] - '0' < a) {
					a = n[i] - '0';
				}
			}
			cout << a << "\n";
		}
	}
	return 0;
}