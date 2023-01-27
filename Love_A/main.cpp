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
    int countA{};
    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            countA++;
        }
    }
    if (countA > s.size() / 2) {
        cout << s.size() << "\n";
    }
    else {
        cout << countA + (countA - 1) << "\n";
    }
    return 0;
}