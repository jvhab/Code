#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	int n;
	vector<int> res;
	int h = 0;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> v1(n);
		vector<int> v2(n);
		for (auto& k : v1)
		{
			cin >> k;
		}
		for (auto& k2 : v2)
		{
			cin >> k2;
		}
		int max_v1 = *max_element(v1.begin(), v1.end());
		int max_v2 = *max_element(v2.begin(), v2.end());
		for (size_t i = 0; i < n; ++i)
		{
			if (max_v1 >= max_v2)
			{
				int temp = 0;
				if (v2[i] > v1[i])
				{
					temp = v1[i];
					v1[i] = v2[i];
					v2[i] = temp;
				}
			}
			else if (max_v2 > max_v1)
			{
				int temp = 0;
				if (v1[i] > v2[i])
				{
					int temp = v1[i];
					v1[i] = v2[i];
					v2[i] = temp;
				}
			}
		}
		max_v1 = *max_element(v1.begin(), v1.end());
		max_v2 = *max_element(v2.begin(), v2.end());
		h = max_v1 * max_v2;
		res.push_back(h);
	}
	for (auto k : res)
		cout << k << "\n";

	return 0;
}