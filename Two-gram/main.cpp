#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	unordered_map<string, int> mp;
	for (int i = 0; i < n - 1; ++i) {
		string temp = s.substr(i, 2);
		mp[temp]++;
	}
	int res{};
	string result;
	for (auto i : mp) {
		if (res < i.second) {
			res = i.second;
			result = i.first;
		}
	}
	cout << result << "\n";
	return 0;
}