#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int minn = min(a, b);
    int maxx = max(a, b);
    cout << minn << " " << maxx << endl;

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int mn = min({a, b, x, y});
    int mx = max({a, b, x, y});
    cout << mn << " " << mx << endl;

    // swap
    int k, l;
    cin >> k >> l;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}
