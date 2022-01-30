#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<string> v1(2);
	v1[0] = "I hate ";
	v1[1] = "I love ";
	vector<string> v2;
	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 != 0)
		{
			v2.push_back(v1[0]);
			v2.push_back("that ");
		}
		else if (i % 2 == 0)
		{
			v2.push_back(v1[1]);
			v2.push_back("that ");
		}
	}
	v2[v2.size() - 1] = "it";
	for (auto i : v2)
		cout << i;

	return 0;
}