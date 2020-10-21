// Программа запрашивает у пользователя значение денежной суммы в новых
// десятичных фунтах, затем переводит эту сумму в старую систему и выводит
// на экран полученную сумму в фунтах, шиллингах и пенсах
#include <iostream>
using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
};

int main()
{
    float dPounds, fracPounds, dShillings, fracShillings;
    sterling s1;

    cout << "Введите сумму в десятичных фунтах: ";
    cin >> dPounds;
    s1.pounds = static_cast<int>(dPounds);
    fracPounds = dPounds - s1.pounds;
    dShillings =  fracPounds * 20;
    s1.shillings = static_cast<int>(dShillings);
    fracShillings = dShillings - s1.shillings;
    s1.pence = static_cast<int>(fracShillings * 12);
    cout << "Старые фунты: " << s1.pounds << '.' << s1.shillings 
         << '.' << s1.pence << endl;
    return 0;
}
