#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(24, 4, 4.5);
    Student *karim = new Student(24, 4, 4.5);
  cout<< karim->roll<< " "<< karim->cls;
  
    return 0;
}
