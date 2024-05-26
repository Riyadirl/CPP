#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    // or ss<<s

    string word;
    int count = 0;
    while (ss >> word)
    {
        count++;
        cout << word << endl;
    }

    return 0;
}
