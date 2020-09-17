// Программа запрашивает у пользователя число галлонов и переводит
// в кубические футы

#include <iostream>
using namespace std;

int main()
{
    float gallons, cubicf;
    cout << "Введите количество галлонов: " << endl;
    cin >> gallons;
    cubicf = gallons / 7.481;
    cout << "Эквивалентный объем в кубических футах: " << cubicf << endl;
    return 0;
}
