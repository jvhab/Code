#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n = 4;
	set<int> v1;
	int res = 0;
	while (n--)
	{
		int p;
		cin >> p;
		v1.insert(p);
	}
	res = 4 - v1.size();
	cout << res;
	return 0;
}