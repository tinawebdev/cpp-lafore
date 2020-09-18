// Программа преобразовывает сумму, записанную в старом формате
// (фунты, шиллинги, пенсы) в новый формат (фунты, пенсы).

#include <iostream>
using namespace std;

int main()
{
    float pounds, shillings, pence;
    cout << "Введите фунты:" << endl;
    cin >> pounds;
    cout << "Введите шиллинги:" << endl;
    cin >> shillings;
    cout << "Введите пенсы" << endl;
    cin >> pence;
    float totalPounds = pounds + (shillings + pence/12)/20;
    cout <<"Сумма в новом формате: " << totalPounds << endl;
    return 0;
}
