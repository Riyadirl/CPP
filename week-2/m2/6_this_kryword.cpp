#include <bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        this->name;
        this->age;
    }
    void hello()
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    person rahi("rakib ", 24);
    cout << rahi.name << " " << rahi.age << endl;
    rahi.hello();

    return 0;
}
