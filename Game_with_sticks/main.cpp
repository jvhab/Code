#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	if (n > m) {
		swap(n, m);
	}
	if (n % 2 == 0) {
		cout << "Malvika" << "\n";
	}
	else {
		cout << "Akshat" << "\n";
	}
	return 0;
}