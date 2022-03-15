#include <vector>
#include <string>
#include <iostream>
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
		cout << *max_element(v1.begin(), v1.end()) - *min_element(v1.begin(), v1.end()) << "\n";
	}
	return 0;
}