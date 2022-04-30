#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

struct my_type {
	string fst;
	int st;
	int ed;
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool flag = false;
		for (char i = 'A'; i <= 'Z'; ++i) {
			int first = n;
			int last = -1;
			if (flag) {
				break;
			}
			for (int j = 0; j < n; ++j) {
				if (s[j] == i) {
					first = min(first, j);
					last = max(last, j);
				}
			}
			for (int k = first; k < last; ++k) {
				if (s[k] != i) {
					cout << "NO" << "\n";
					flag = true;
					break;
				}
			}
		}
		if (!flag) {
			cout << "YES" << "\n";
		}
	}
}