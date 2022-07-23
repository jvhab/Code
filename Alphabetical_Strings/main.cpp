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
		string s;
		cin >> s;
		bool flag = false;
		size_t a = s.find('a');
		if (a == string::npos) {
			cout << "NO" << "\n";
			continue;
		}
		size_t left = a;
		size_t right = a;
		for (size_t i = 1; i < s.size(); ++i) {
			size_t symb = s.find(static_cast<char> ('a' + i));
			if (symb == string::npos) {
				cout << "NO" << "\n";
				flag = true;
				break;
			}
			else if (symb == left - 1) {
				left = left - 1;
			}
			else if (symb == right + 1) {
				right = right + 1;
			}
			else {
				cout << "NO" << "\n";
				flag = true;
				break;
			}
		}
		if (!flag)
			cout << "YES" << "\n";
	}
	return 0;
}