#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;
    int marks1, marks2;
    person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }
    void hello()
    {
        // cout << "Hello" << endl;
        cout << name << " " << age << endl;
    }
    int total()
    {
        return marks1 + marks2;
    }
};

int main()
{
    person rahi("rakib ", 24, 77, 88);
    // cout << rahi.name << " " << rahi.age << endl;
    rahi.hello();
    cout << rahi.total() << endl;
    return 0;
}
