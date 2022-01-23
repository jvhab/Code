#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main()
{
	int t;

	int a, b;
	std::vector<int> a1;
	std::vector<int> b1;
	std::vector<std::pair<int, int>> pr(102);
	std::cin >> t;
	int n, k;
	int res = 0;
	std::vector<int> res1;
	for (int i = 0; i < t; ++i)
	{
		std::cin >> n >> k;
		res = k;
		for (int j = 0; j < n; ++j)
		{
			std::cin >> a;
			pr[j].first = a;
		}
		for (int k = 0; k < n; ++k)
		{
			std::cin >> b;
			pr[k].second = b;
		}

		std::sort(pr.begin(), pr.end());						

		for (int i = 0; i < n; ++i)
		{
			if (pr[i].first <= k)
			{
				res += pr[i].second;
			}
		}

		res1.push_back(res);
	}
	for (auto res : res1)
		std::cout << res << "\n";
	return 0;
}