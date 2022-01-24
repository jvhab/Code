#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v1(n);
	for (int i = 0; i < n; ++i)
	{
		int p;
		cin >> p;
		p--;
		v1[p] = i + 1;
	}
	for (auto k : v1)
		cout << k << " ";
	

	return 0;
}				