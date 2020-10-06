// Программа рассчитывает сумму денег, которые пользователь получит при
// вложении начальной суммы с фксированной процентной ставкой дохода 
// через определенное количество лет
#include <iostream>
#include <iomanip>

int main()
{
    double amount, percent, result;
    unsigned int years = 1;
    std::cout << "Введите начальный вклад: ";
    std::cin >> amount;
    std::cout << "Введите число лет: ";
    std::cin >> years;
    std::cout << "Введите процентную ставку: ";
    std::cin >> percent;

    for (int i = 0; i < years; i++) {
        amount += amount*percent/100;
        result = amount;
    }
    std::cout << std::endl;
    std::cout << "Через " << years << " лет вы получите "
              << result << " долларов" << std::endl;

    return 0;
}
