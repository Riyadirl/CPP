#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a = "hello bangla";

    // 1
    string s("hello");
    //  2
    string s("hellobangla", 5);
    // 3
    string s(a, 4); // index 4 to last
    // 4
    string s1(26, 'a'); // 26 a

    
    cout << s << endl;
    return 0;
}
