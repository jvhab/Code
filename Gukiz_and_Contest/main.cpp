#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v1(n);
	set<int, greater<int>> st1;
	for (auto& i : v1) {
		cin >> i;
		st1.insert(i);
	}
	vector<int> result(n);
	int counts{ 1 };
	int temp{1};
	for (auto i : st1) {
		for (size_t j = 0; j < n; ++j) {
			if (v1[j] == i) {
				result[j] = counts;
				temp++;
			}
		}
		counts = temp;
	}
	for (auto i : result) {
		cout << i << " ";
	}
	cout << "\n";
	return 0;
}