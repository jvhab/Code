#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int sums = 0;
	map<string, int> mp;
	mp["Tetrahedron"] = 4;
	mp["Cube"] = 6;
	mp["Octahedron"] = 8;
	mp["Dodecahedron"] = 12;
	mp["Icosahedron"] = 20;
	while (n--)
	{
		string fig;
		cin >> fig;
		sums += mp[fig];
	}
	cout << sums;
	return 0;
}