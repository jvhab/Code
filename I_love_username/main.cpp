#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int res = 0;
	vector<int> point(n);
	for (auto& i : point)
		cin >> i;
	int max_ = point[0];
	int min_ = point[0];
	for (size_t j = 1; j < n; ++j)
	{
		if (point[j] > max_)
		{
			res++;
			max_ = point[j];
		}
		else if (point[j] < min_)
		{
			res++;
			min_ = point[j];
		}
	}
	cout << res << "\n";
	return 0;
}