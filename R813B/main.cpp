#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n == 1) {
			cout << 1 << "\n";
			continue;
		}
		else if (n == 2) {
			cout << 2 << " " << 1 << '\n';
			continue;
		}
		else {
			if (n % 2 == 0) {
				for (size_t i = 1; i <= n; ++i) {
					if (i % 2 == 0) {
						cout << i - 1 << " ";
					}
					else
						cout << i + 1 << " ";
				}
			}
			else {
				cout << 1 << " ";
				for (size_t i = 2; i <= n; ++i) {
					if (i % 2 == 0) {
						cout << i + 1 << " ";
					}
					else {
						cout << i - 1 << " ";
					}
				}
			}
			
		}
		cout << "\n";
	}
	return 0;
}