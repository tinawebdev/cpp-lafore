#include <iostream>
#include <iomanip>

struct employee
{
    int number;
    float compensation;
};

int main()
{
    employee e1, e2, e3;
    std::cout << "Сотрудник #1:" << "\n\tНомер: ";
    std::cin >> e1.number;
    std::cout << "\tВеличина пособия: ";
    std::cin >> e1.compensation;

    std::cout << "Сотрудник #2:" << "\n\tНомер: ";
    std::cin >> e2.number;
    std::cout << "\tВеличина пособия: ";
    std::cin >> e2.compensation;

    std::cout << "Сотрудник #3:" << "\n\tНомер: ";
    std::cin >> e3.number;
    std::cout << "\tВеличина пособия: ";
    std::cin >> e3.compensation;

    std::cout << std::endl;

    for (int i=0; i < 3; i++)
    {
        std::cout << std::setw(15) << "Сотрудник #" << i << '\t';
    }
    std::cout << std::endl;
    std::cout << std::setfill('-') << std::setw(45) << "" 
              << std::setfill(' ') << std::endl;

    std::cout << std::setiosflags(std::ios::left) << std::setw(2) 
              << "№ " << std::setw(14) << e1.number << std::setw(2)
              << "№ " << std::setw(14) << e2.number << std::setw(2)
              << "№ " << std::setw(14) << e3.number << std::endl;

    std::cout << std::setiosflags(std::ios::left) << std::setw(1) 
              << "$" << std::setw(15) << e1.compensation << std::setw(1)
              << "$" << std::setw(15) << e2.compensation << std::setw(1)
              << "$" << e3.compensation << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
