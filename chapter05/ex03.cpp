#include <iostream>
using namespace std;

void zeroSmaller(int&, int&);

int main()
{
    int a, b;

    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    zeroSmaller(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void zeroSmaller(int& a, int& b)
{
    if (a < b)
    {
        a = 0;
    }
    else
    {
        b = 0;
    }
}
