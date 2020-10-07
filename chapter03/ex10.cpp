// Программа вычисляет, сколько лет потребуется для того, чтобы при
// заданной процентной ставке и величине начального вклада сумма на счете
// достигла запрашиваемого пользователем значения
#include <iostream>

int main()
{
    double amount, end_amount, percent, temp;
    unsigned int years = 0;
    std::cout << "Введите начальный вклад: ";
    std::cin >> amount;
    std::cout << "Введите конечную сумму: ";
    std::cin >> end_amount;
    std::cout << "Введите процентную ставку: ";
    std::cin >> percent;

    temp = amount;

    while (temp < end_amount) {
        temp *= 1.0+(percent/100);
        std::cout << temp << std::endl;
        years++;
    }
    std::cout << std::endl;
    std::cout << "Вы получите " << end_amount << " через " << years 
              << " лет" << std::endl;

    return 0;
}
