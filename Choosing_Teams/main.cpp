#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v1(n);
	int res = 0;
	for (auto& i : v1)
		cin >> i;
	sort(v1.begin(), v1.end());
	for (size_t i = 0; i < v1.size(); ++i)
	{
		if (v1[i] <= (5 - k))
		{
			res++;
		}
	}
	cout << res / 3;
	return 0;
}