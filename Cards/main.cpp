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
	int one{};
	int zero{};
	for (size_t i = 0; i < n; ++i) {
		char symb;
		cin >> symb;
		if (symb == 'n')
			one++;
		if (symb == 'z')
			zero++;
	}
	for (size_t i = 0; i < one; ++i)
		cout << 1 << " ";
	for (size_t i = 0; i < zero; ++i)
		cout << 0 << " ";

	return 0;
}