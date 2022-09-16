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
	int m;
	cin >> m;
	vector<int> v2(m);
	for (auto& i : v2) {
		cin >> i;
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	cout << v1[v1.size() - 1] << " " << v2[v2.size() - 1];
	return 0;
}