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
		int a, b;
		cin >> a >> b;
		string s = "";
		int n = abs(a - b);
		if (n >= a) {
			for (size_t i = 0; i < a; ++i)
				cout << 0;
			for (size_t i = 0; i < b; ++i)
				cout << 1;
			cout << "\n";
		}
		else if (n >= b) {
			for (size_t i = 0; i < b; ++i)
				cout << 1;
			for (size_t i = 0; i < a; ++i)
				cout << 0;
			cout << "\n";
		}		
		else {
			int i = 0;
			int j = 0;
			int c = a + b;
			while (c--) {
				for (; i < a; ) {
					cout << 0;
					i++;
					break;
				}
				for (; j < b; ) {
					cout << 1;
					j++;
					break;
				}
			}
			cout << "\n";
		}
	}
	return 0;
}