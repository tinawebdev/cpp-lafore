// Программа запрашивает у пользователя сумму, указанную в десятичных
// фунтах и переводит ее в старую систему фунтов, шиллингов и пенсов.

#include <iostream>
using namespace std;

int main()
{
    float decpounds, decfrac, decshillings, shillfrac;
    int pounds, shillings, pence;

    cout << "Введите число десятичных фунтов: " << endl;
    cin >> decpounds;

    pounds = static_cast<int>(decpounds);
    decfrac = decpounds - pounds;
    decshillings = decfrac * 20;
    shillings = static_cast<int>(decshillings);
    shillfrac = decshillings - shillings;
    pence = static_cast<int>(shillfrac * 12);

    cout << "Эквивалентная сумма в старой форме записи: " << pounds 
         << "." << shillings << "." << pence << endl;
    return 0;
}
