// Программа запрашивает температуру в градусах по Цельсию
// и отображает ее эквивалент по Фаренгейту.

#include <iostream>
using namespace std;

int main()
{
    float ctemp;
    cout << "Введите температуру по Цельсию: " << endl;
    cin >> ctemp;
    float ftemp = (ctemp * 9/5) + 32;
    cout << "Температура по Фаренгейту равна " << ftemp << endl; 
    return 0;
}
