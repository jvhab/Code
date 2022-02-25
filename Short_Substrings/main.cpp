#include <iostream>
#include <vector>
#include <string>
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
		string s;
		cin >> s;
		string res;
		for (size_t i = 0; i < s.size(); i += 2)
		{
			res += s[i];
		}
		res += s[s.size() - 1];
		cout << res << "\n";
	}
	return 0;
}