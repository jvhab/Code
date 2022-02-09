#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v1(4);
	for (auto& k : v1)
		cin >> k;
	sort(v1.begin(), v1.end());
	cout << v1[v1.size() - 1] - v1[0] << " " << v1[v1.size() - 1] - v1[1] << " " << v1[v1.size() - 1] - v1[2];

	return 0;
}