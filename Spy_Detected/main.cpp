#include <iostream>
#include <vector>
#include <string>
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
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		int temp = v1[0];
		for (size_t i = 1; i < n; ++i)
		{
			if (temp != v1[i] && i == n - 1)
			{
				cout << n << "\n";
				break;
			}
			else if (temp != v1[i] && v1[i] == v1[i + 1])
			{
				cout << 1 << "\n";
				break;
			}
			else if (temp != v1[i] && v1[i] != v1[i + 1])
			{
				cout << i + 1 << "\n";
				break;
			}
		}
	}
	return 0;
}