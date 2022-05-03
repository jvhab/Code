#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        if (temp == 1)
            v1.push_back(i + 1);
        else if (temp == 2)
            v2.push_back(i + 1);
        else
            v3.push_back(i + 1);
    }
    int res = min(v1.size(), min(v2.size(), v3.size()));
    cout << res << "\n";
    for (int i = 0; i < res; ++i)
    {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }
	return 0;
}