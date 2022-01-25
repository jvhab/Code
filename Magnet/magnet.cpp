#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int res = 0;
	cin >> n;
	string s1;
	string s = "";
	vector<string> v1;
	vector<int> v2;
	for (int j = 0; j < n; ++j)
	{
		cin >> s;
		s1 += s;
	}
	for (size_t i = 0; i < s1.size() - 1; ++i)
	{
		if (s1[i] == s1[i + 1])
		{
			res++;
		}
	}
	if (s1.size() == 2)
	{
		cout << 1;
	}
	else if (s1.size() > 2)
	{
		cout << res + 1;
	}


	return 0;
}		