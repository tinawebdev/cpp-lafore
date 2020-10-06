// Программа циклически запрашивает ввод пользователем числа и вычисляет
// его факториал, пока пользователь не введет 0
#include <iostream>
using namespace std;

int main()
{
    unsigned int numb;                  // тип long для результата
    unsigned long fact = 1;
    while (numb != 0) {
        cout << "Введите целое число (0 - выход): ";
        cin >> numb;                    // ввод числа
        for (int j=numb; j>0; j--)      // умножние 1 на
            fact *=j;                   // numb, numb-1, ..., 2, 1
        cout << "Факториал числа равен " << fact << endl;
        fact = 1;
    }
    return 0;
}
