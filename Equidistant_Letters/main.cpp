#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void solve(string& s) {
	sort(s.begin(), s.end());
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		solve(s);
		cout << s << "\n";
	}


	
	return 0;
}
