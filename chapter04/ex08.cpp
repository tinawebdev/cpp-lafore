// Программа запрашивает у пользователя значения двух дробей, а затем 
// складывает их и выводит результат в форме дроби.

#include <iostream>
using namespace std;

struct fraction
{
    int num;
    int den;
};

int main()
{
    fraction f1, f2, f3;
    char slant;

    cout << "Введите первую дробь в формате a/b: ";
    cin >> f1.num >> slant >> f1.den;

    cout << "Введите вторую дробь в формате a/b: ";
    cin >> f2.num >> slant >> f2.den;

    f3.num = (f1.num*f2.den)+(f1.den*f2.num);
    f3.den = f1.den*f2.den;

    cout << "Сумма двух дробей равна: " << f3.num << "/" << f3.den << endl;

    return 0;
}
