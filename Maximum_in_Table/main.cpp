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
	int result = 0;
	vector<vector<int>> v1(n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i == 0 || j == 0)
			{
				v1[i].push_back(1);
			}
			else
			{
				v1[i].push_back(v1[i - 1][j] + v1[i][j - 1]);
			}
		}
	}
	cout << v1[n - 1][n - 1] << "\n";
	return 0;
}