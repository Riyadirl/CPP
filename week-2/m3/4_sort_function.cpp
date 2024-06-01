#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int roll;
    int marks;
};

bool compare(student a, student b)
{
    // 1
    //  if (a.marks <= b.marks)
    //  return true;
    //   else
    //     return false;

    // 2
    // return a.marks >= b.marks;
    // 3
    if (a.marks > b.marks)
        return true;
    else if (a.marks < b.marks)
        return false;
    else
    {
        if (a.roll < b.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // 4

    return a.roll < b.roll;
}

int main()
{

    int n;
    cin >> n;
    student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    sort(a, a + n, compare);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}
