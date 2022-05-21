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
    int res{0};
    int i{1};
    int sum{};
    int temp{};
    while(sum <= n) {
        res += i;
        i++;
        sum += res;
        temp++;
    }
    cout << temp - 1;

    return 0;
}
