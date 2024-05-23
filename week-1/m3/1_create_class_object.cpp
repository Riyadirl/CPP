#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int id;
    double cgpa;
};

int main()
{
    Student a;
    a.id = 11;
    a.cgpa = 3.22;
    char tmp[100] = "jhgfd";
    strcpy(a.name, tmp);
    cout << a.name << " " << a.id << " " << a.cgpa;

    //////input from user
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.id >> a.cgpa;
    getchar(); // prevent enter
    cin.getline(b.name, 100);
    cin >> b.id >> b.cgpa;

    cout << a.name << " " << a.id << " " << a.cgpa;

    return 0;
}
