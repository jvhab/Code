#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sol = 0;
	vector<int> v1(n);
	for (auto& i : v1)
		cin >> i;
	int max_el = *max_element(v1.begin(), v1.end());
	for (size_t i = 0; i < n; ++i)
	{
		sol += max_el - v1[i];
	}
	cout << sol << "\n";
	return 0;
}