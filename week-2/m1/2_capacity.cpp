#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "hello";
    // cout << s << endl;

    // cout<< s.size()<<endl;
    // cout<< s.max_size()<<endl;
    // cout<< s.capacity()<<endl;
    // s.clear(); // clear


    // empty
    string s1 = "hello geloo";
    if (s1.empty() == true)
        cout << "empty" << endl;
    else
        cout << "not" << endl;


    // resize
    string s2 = "bangladesh";
    // 1
    s2.resize(6);
    // 2
    s2.resize(8); // null
    // 3
    s2.resize(12, 'X'); // bangladeshXX
    cout << s2 << endl;

    return 0;
}
