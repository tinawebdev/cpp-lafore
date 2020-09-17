// Программа принимает букву от пользователя, а затем выводит
// нулевое или ненулевое значение в зависимости от того, 
// является ли буква строчной или нет.

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    cout << "Введите букву: " << endl;
    char letter;
    cin >> letter;
    bool result = islower(letter);
    cout << result << endl;
    return 0;
}
