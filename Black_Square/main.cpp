#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> a(4);
	for (auto& i : a)
		cin >> i;
	string s;
	cin >> s;
	int result = 0;
	for (size_t i = 0; i < s.size(); ++i)
	{
		result += a[(s[i] - '0') - 1];
	}
	cout << result << endl;
	return 0;
}