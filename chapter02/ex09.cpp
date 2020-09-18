// Программа запрашивает у пользователя значения двух дробей, а затем 
// складывает их и выводит результат в форме дроби.

#include <iostream>
using namespace std;

int main()
{
    char slant;
    int a, b, c, d, sum1, sum2;
    cout << "Введите первую дробь в формате a/b: ";
    cin >> a >> slant >> b;
    cout << "Введите вторую дробь в формате a/b: ";
    cin >> c >> slant >> d;
    sum1 = (a*d)+(b*c);
    sum2 = b*d;
    cout << "Сумма двух дробей равна: " << sum1 << "/" << sum2 << endl;
    return 0;
}
