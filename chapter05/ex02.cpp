#include <iostream>
using namespace std;

double power(double n, int p=2);

int main()
{
    double n;
    int pow;
    int answer = 0;

    cout << "Введите число: ";
    cin >> n;
    cout << "1 - Ввести степень\n2 - Оставить по умолчанию\n> ";
    cin >> answer;

    if (answer == 1)
    {
        cout << "Введите степень: ";
        cin >> pow;
        cout << "Результат: " << power(n, pow);
    }
    else
    {
        cout << "Результат: " << power(n);
    }
}

double power(double n, int p)
{
    double res = 1.0;
    for (int i=0; i<p; i++)
    {
        res *= n;
    }
    return res;
}
