#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int tmp{ n / 2 };
    int cnt{};
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < n; ++j) {
            if (j >= tmp - cnt && j <= tmp + cnt) {
                cout << "D";
            }
            else {
                cout << "*";
            }
        }
        if (i < n / 2) {
            cnt++;
        }
        else {
            cnt--;
        }
        cout << "\n";
    }
    return 0;
}