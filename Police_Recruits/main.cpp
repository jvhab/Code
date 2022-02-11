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
	int sums = 0;
	int police = 0;
	int crime = 0;
	vector<int> v1(n);
	for (auto& k : v1)
	{
		cin >> k;
		if (k > 0)
		{
			res += k;
		}
		else
		{
			if (res > 0)
			{
				res--;
			}
			else
			{
				crime++;
			}
		}
	}
	cout << crime << endl;
	return 0;
}