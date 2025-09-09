#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3
    for (auto x : m)
    {
        cout << x.first << " " << x.second << "\n";
    }
    return 0;
}