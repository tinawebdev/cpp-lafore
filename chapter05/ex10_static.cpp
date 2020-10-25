// Программа, которая выводит функцию, выводящую на экран количество раз, 
// которое она вызывалась ранее
#include <iostream>
using namespace std;

void counter();

int main()
{
    for(int i = 0; i < 10; i++)
        counter();
    return 0;
}

void counter()
{
    static int lCount = 0;
    lCount++;
    cout << "Вызов функции: "  << lCount << endl;
}
