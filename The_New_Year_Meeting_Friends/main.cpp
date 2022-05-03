#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> v1(3);
	for (auto& i : v1)
		cin >> i;
	cout << *max_element(v1.begin(), v1.end()) - *min_element(v1.begin(), v1.end());
	return 0;
}