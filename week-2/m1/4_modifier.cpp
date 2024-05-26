#include <bits/stdc++.h>
using namespace std;

int main()
{
    // append
    string a = "bangla";
    string b = "desh";
    // append1
    a = a + b;
    // append 2
    //  a.append(b);
    cout << a << endl;
    cout << b << endl;

    // push or memory expand
    a.push_back('A');
    cout << a << endl;

    // pop
    a.pop_back();
    cout << a << endl;

    // erase
    string x = "mahbubRiyad";
    // x.erase(4,2); //4=index, 1=how many character to delete

    // erase + replace
    x.replace(4, 2, "so");

    // insert
    x.insert(5, "hasan");
    
    return 0;
}
