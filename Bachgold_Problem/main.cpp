#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt{ 0 };
	vector<int> res;
	while (n > 0) {
		if (n > 3 || n == 2) {
			res.push_back(2);
			cnt++;
		}
		else if (n == 3) {
			res.push_back(3);
			cnt++;
		}
		n -= 2;
	}
	cout << cnt << endl;
	for (auto it : res)
		cout << it << " ";
	return 0;
}