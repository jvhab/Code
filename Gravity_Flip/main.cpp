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
	vector<int> v1(n);
	for (auto& i : v1) {
		cin >> i;
	}
	sort(v1.begin(), v1.end(), less<int>());
	for (auto i : v1) {
		cout << i << " ";
	}
	return 0;
}