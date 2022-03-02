#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		vector<int> b(n);
		for (auto& i : a)
			cin >> i;
		for (auto& i : b)
			cin >> i;
		sort(a.begin(), a.end()); // 0 1 2
		sort(b.rbegin(), b.rend()); // 10 9 8
		for (size_t i = 0; i < k; ++i)
		{
			if (a[i] < b[i])
			{
				swap(a[i], b[i]);
			}
		}
		cout << accumulate(a.begin(), a.end(), 0) << "\n";

	}
	return 0;
}