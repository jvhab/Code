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
		int sums = 0;
		string result = "";
		string n;
		cin >> n;
		for (size_t i = 0; i < n.size(); ++i)
		{
			if (n[i] != '0')
			{
				sums++;
				result += n[i] + string(n.size() - 1 - i, '0') + " ";
			}
		}
		cout << sums << "\n";
		cout << result;
	}
	return 0;
}