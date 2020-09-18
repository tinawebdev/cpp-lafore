// Программа демонстрирует применение манипулятора setfill

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long pop1 = 8425785, pop2 = 47, pop3 = 9761;
    cout << setfill('.') << setw(8) << "Location" << setw(12)
         << "Population" << endl
         << setw(8) << "City-001" << setw(12) << pop1 << endl
         << setw(8) << "City-002" << setw(12) << pop2 << endl
         << setw(8) << "City-003" << setw(12) << pop3 << endl;
    return 0;
}
