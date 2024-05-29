#include <bits/stdc++.h>
using namespace std;

void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        cout << word << endl;
        print(ss);
    }
}

// reserse
void reverse_prnt(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print(ss);
        cout << word << endl;
    }
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    print(ss);
    reverse_prnt(ss);
    return 0;
}
