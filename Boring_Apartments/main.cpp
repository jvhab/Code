#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string x;
        cin >> x;
        int numOne = x[0] - '0' - 1;
        int NumLen = x.size();
        int result{};
        if (NumLen == 1) {
            result = 10 * numOne + NumLen;
        }
        else if (NumLen == 2) {
            result = 10 * numOne + 3;
        }
        else if (NumLen == 3) {
            result = 10 * numOne + 6;
        }
        else if (NumLen == 4) {
            result = 10 * numOne + 10;
        }
        cout << result << endl;
    }
    return 0;
}
