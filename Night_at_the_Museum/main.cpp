#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	s = "abcdefghijklmnopqrstuvwxyz";
	string s2;
	cin >> s2;
	int res{};
	int temp{};
	int right = 'a';
	int left = 'z';
	for (size_t i = 0; i < s2.size(); ++i) {
		right = abs(s2[i] - right);
		left = 26 - right;
		temp = min(right, left);
		right = s2[i];
		res += temp;
	}
	cout << res << "\n";
	return 0;
}