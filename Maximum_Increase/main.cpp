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
	for (auto& i : v1)
		cin >> i;
	int first = v1[0];
	int res{1};
	vector<int> v2(1, 1);
	for (size_t i = 1; i < n; ++i) {
		if (v1[i] > first) {
			res++;
			first = v1[i];
		}
		else {
			first = v1[i];
			v2.push_back(res);
			res = 1;
		}
	}
	v2.push_back(res);
	cout << *max_element(v2.begin(), v2.end()) << "\n";
	return 0;
}