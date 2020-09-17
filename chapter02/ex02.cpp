// Программа демонстрирует применение манипулятора setw

#include <iostream>
#include <iomanip> // заголовочный файл для использования setw
using namespace std;

int main()
{
    cout << "1990" << setw(10) << "135" << endl
    << "1991" << setw(10) << "7290" << endl
    << "1992" << setw(10) << "11300" << endl
    << "1993" << setw(10) << "16200" << endl;
    return 0;
}
