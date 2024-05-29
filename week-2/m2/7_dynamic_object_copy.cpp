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
};

int main()
{

    person *rahi = new person("rahi ", 24);
    person *mahi = new person("mahi", 25);

    // 1
    rahi->name = mahi->name;
    rahi->age = mahi->age;

    // 2
    *rahi = *mahi;

    delete mahi;
    cout << rahi->name << " " << rahi->age << endl;

    return 0;
}
