#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1;
	string s2;
	string sums;
	cin >> s1 >> s2 >> sums;
	string s1_s2 = s1 + s2;
	sort(s1_s2.begin(), s1_s2.end());
	sort(sums.begin(), sums.end());
	if (s1_s2 == sums)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}