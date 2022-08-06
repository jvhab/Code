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
	int a{};
	for (size_t i = 0; i < n; ++i) {
		a += i;
		if (a < n)
			cout << s[a];
	}

	return 0;
}