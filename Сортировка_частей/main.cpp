#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		bool flag = false;
		vector<int> v1(n);
		for (auto& k : v1)
			cin >> k;
		for (size_t i = 0; i < n - 1; ++i)
		{
			if (v1[i] > v1[i + 1])
				flag = true;
		}
		if (flag)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}
