// Программа предлагает пользователю осуществить перевод из шкалы 
// Цельсия в шкалу Фаренгейта или наоборот
#include <iostream>

int main()
{
    int choice;
    float ctemp, ftemp;

    std::cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта." << std::endl
              << "Нажмите 2 для перевода шкалы Фаренгейта в шкалу Цельсия." << std::endl;

    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Введите температуру по Цельсию: ";
        std::cin >> ctemp;
        ftemp = (ctemp*9/5)+32;
        std::cout << "Значение по Фаренгейту: " << ftemp << std::endl;
    } else {
        std::cout << "Введите температуру по Фаренгейту: ";
        std::cin >> ftemp;
        ctemp = (ftemp-32)*5/9;
        std::cout << "Значение по Цельсию: " << ctemp << std::endl;
    }

    std::cin.get();
    std::cin.get();
    return 0;
}
