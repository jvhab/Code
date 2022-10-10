#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	string s;
	cin >> s;
	int zero{};
	int one{};
	for (size_t i = 0; i < s.size(); ++i) {
		if (s[i] == '0')
			zero++;
		else
			one++;
	}
	cout << abs(zero - one) << "\n";
	return 0;
}