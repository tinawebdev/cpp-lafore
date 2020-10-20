// Программа, с использованием структуры, позволяющая раздельно хранить
// три части телефонного номера
#include <iostream>

struct phone
{
    int part1;
    int part2;
    int part3;
};

int main()
{
    phone ph1 = {212, 767, 8900};
    phone ph2;
    std::cout << "Введите код города, номер станции, номер абонента:\n";
    std::cin >> ph2.part1 >> ph2.part2 >> ph2.part3;
    std::cout << "Мой номер (" << ph1.part1 << ") " << ph1.part2 
              << "-" << ph1.part3 << std::endl;
    std::cout << "Ваш номер (" << ph2.part1 << ") " << ph2.part2 
              << "-" << ph2.part3 << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
