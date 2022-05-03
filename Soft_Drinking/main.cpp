#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int x = k * l;
	int y = x / nl;
	int z = c * d;
	int m = p / np;
	cout << (min(min(y, z), m)) / n;

}