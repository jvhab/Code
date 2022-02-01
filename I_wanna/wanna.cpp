#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int p1, p2;
	cin >> p1;
	int a1, a2;
	vector<int> v1(n + 1);
	for (size_t i = 0; i < p1; ++i)
	{
		cin >> a1;
		v1[a1] = 1;
	}
	cin >> p2;
	for (size_t i = 0; i < p2; ++i)
	{
		cin >> a2;
		v1[a2] = 1;
	}
	for (size_t i = 1; i <= n; ++i)
	{
		if (v1[i] == 0)
		{
			cout << "Oh, my keyboard!";
			return 0;
		}
		
	}
	cout << "I become the guy.";
	return 0;
}