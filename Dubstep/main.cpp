#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	string res{};
	string start = string(1, s[0]) + string(1, s[1]) + string(1, s[2]);
	string fin = string(1, s[s.size() - 3]) + string(1, s[s.size() - 2]) + string(1, s[s.size() - 1]);
	if (start == "WUB") {
		s.erase(s.begin(), s.begin() + 3);
	}
	if (fin == "WUB") {
		s.erase(s.end() - 3, s.end());
	}
	while (s.find("WUB") != string::npos) {
		auto pos = s.find("WUB");
		s.replace(s.begin() + pos, s.begin() + pos + 3, " ");
	}
	if (s[0] == ' ')
		s.erase(s.begin(), s.begin() + 1);
	cout << s << "\n";
	
	return 0;
}