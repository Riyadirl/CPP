#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "hello bangla";

    // 1
    string s1("hello");
    //  2
    string s2("hellobangla", 5);
    // 3
    string s3(s, 4); // index 4 to last
    // 4
    string s4(10, 'a'); // 26 a

    
    cout << s << endl;//hello bangla
    cout << s1 << endl;//hello 
    cout << s2 << endl;//hello
    cout << s3 << endl;//o bangla
    cout << s4 << endl;//aaaaaaaaaa
    return 0;
}
