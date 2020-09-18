// Программа запрашивает денежную сумму в долларах, а затем выводит
// эквивалентные суммы в других валютах.

#include <iostream>
using namespace std;

int main()
{
    float dollars, british = 1.487, franc = 0.172, dmark = 0.584, yen = 0.00955;
    cout << "Введите сумму в долларах: " << endl;
    cin >> dollars;
    cout << "Стерлинг: " << dollars*british << endl
         << "Франк: " << dollars*franc << endl
         << "Немецкая марка: " << dollars*dmark << endl
         << "Японская иена: " << dollars*yen << endl;
    return 0;
}
