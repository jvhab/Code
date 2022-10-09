#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
	string s2;
	cin >> s2;
	string s3;
	cin >> s3;
	if (s2 == "R") {
		for (size_t i = 0; i < s3.size(); ++i) {
			auto temp = s.find(s3[i]);
			cout << s[temp - 1];
		}
		cout << "\n";
	}
	else {
		for (size_t i = 0; i < s3.size(); ++i) {
			auto temp = s.find(s3[i]);
			cout << s[temp + 1];
		}
		cout << "\n";
	}
	return 0;
}