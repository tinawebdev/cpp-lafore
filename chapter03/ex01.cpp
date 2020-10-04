// Программа, которая позволяет пользователю ввести число, а затем
// генерирует таблицу размером 20 строк на 10 столбцов
#include <iostream>
#include <iomanip>

int main()
{
    unsigned long number;
    std::cout << "Введите число:" << std::endl;
    std::cin >> number;
    
    for (int i=1; i <= 200; i++) {
        std::cout << std::setw(5) << number*i << " ";
        if (i%10 == 0) std::cout << std::endl;
    }
    std::cin.get();
    std::cin.get();
    return 0;
}
