#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int a[] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51 };
	int n, m;
	cin >> n >> m;
	int i{};
	for (; a[i] != n; i++);
	if (a[i + 1] == m)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}