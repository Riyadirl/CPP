#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int id;
    double cgpa;
    Student(int c, int i, double cg)
    {
        // 1
        cls = c;
        id = i;
        cgpa = cg;

        // 2
        // Student(int cls, int id, double cgpa)
        this->cls = cls;
        this->id = id;
        this->cgpa = cgpa;
    }
};

int main()
{
    Student rahim(3, 44, 3.55);
    cout << rahim.cls << " " << rahim.id << " " << rahim.cgpa;
    return 0;
}
