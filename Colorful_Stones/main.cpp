#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	string s2;
	cin >> s2;
	int res{ 1 };
	for (size_t i = 0; i < s.size(); ++i) {
		for (size_t j = 0; j < s2.size(); ++j) {
			if (s2[j] == s[i]) {
				res++;
				i++;
			}
		}
		break;
	}
	cout << res << "\n";
	return 0;
}