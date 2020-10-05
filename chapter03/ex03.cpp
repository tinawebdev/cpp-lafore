#include <iostream>
#include <conio.h>

int main()
{
    char ch;
    unsigned long total = 0;
    std::cout << "Введите число: ";
    for(int i=1; i<=6; i++) {
        ch=getche();
        total = total*10 + ch - '0';
    }
    std::cout << "\nПолучилось число: " << total << std::endl;

    return 0;
}
