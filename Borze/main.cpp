#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    map<string, int> key_;
    key_["."] = 0;
    key_["-."] = 1;
    key_["--"] = 2;
    for (size_t i = 0; i < s.size(); ++i) {
        string s2 = "";
        if (s[i] == '.') {
            cout << 0;
        }
        else {
            s2 = string(1, s[i]) + string(1, s[i + 1]);
            i++;
            if (s2 == "-.") {
                cout << 1;
            }
            else if  (s2 == "--") {
                cout << 2;
             }
        }
    }
    cout << "\n";

    return 0;
}
