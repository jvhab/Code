#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque>

int main()
{
	int t;
	int cmp = 0;
	int l, r, k;
	int prem = 0;
	std::cin >> t;
	std::deque<int> v1;
	std::vector<std::string> res;
	for (int i = 0; i < t; ++i)
	{
		std::cin >> l >> r >> k;
		v1.push_back(l);
		for (int j = 0; j < (r - k + 1); ++j)
		{
			prem = prem + l + 1;
			v1.push_back(prem);
		}
		for (int kk = k; kk < 0; --kk)
		{
			int dab = v1[kk] * v1[kk - 1];
			v1.pop_back(v1[kk]);
			v1.pop_back(v1[kk + 1]);
			v1.push_front(dab);
		}
		for (int g = 0; g < v1.size(); ++g)
		{
			if (g1[0] % g[1] > 1)
				res.push_back("YES");
			else
				res.push_back("NO");
		}
	}
	for (auto ss : res)
		std::cout << ss << "\n";
	return 0;
}