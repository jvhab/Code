#include <iostream>
#include <string>
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
		vector<int> v1(n);
		for (auto& i : v1)
			cin >> i;
		vector<int> a;
		vector<int> b;
		for (size_t i = 0; i < v1.size(); ++i)
		{
			if (i % 2 == 0 && v1[i] % 2 != 0)
				a.push_back(v1[i]);
			else if (i % 2 != 0 && v1[i] % 2 == 0)
				b.push_back(v1[i]);
		}
		if (a.size() != b.size())
			cout << -1 << "\n";
		else
			cout << a.size() << "\n";
	}
}