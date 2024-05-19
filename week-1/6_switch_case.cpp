#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int grade;
    cin >> grade;
    switch (grade)
    {
    case 1:
        std::cout << "Poor" << std::endl;
    case 2:
        std::cout << "Below average" << std::endl;
    case 3:
        std::cout << "Average" << std::endl;
        break;
    case 4:
        std::cout << "Good" << std::endl;
        break;
    case 5:
        std::cout << "Excellent" << std::endl;
        break;
    default:
        std::cout << "Invalid grade" << std::endl;
        break;
    }
    return 0;
}
