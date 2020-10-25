// Программа, которая выводит функцию, выводящую на экран количество раз, 
// которое она вызывалась ранее
#include <iostream>
using namespace std;

int count;
void globalCounter();

int main()
{
    for(int i = 0; i < 10; i++)
        globalCounter();
    cout << "Сколько раз была вызвана функция с глобальной переменной: " 
         << count << endl;
    return 0;
}

void globalCounter()
{
    count++;
    cout << "Вызов функции: "  << count << endl;
}
