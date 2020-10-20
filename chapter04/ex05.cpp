#include <iostream>

struct date
{
    int month;
    int day;
    int year;
};

int main()
{
    char ch = '/';
    date new_date;
    std::cout << "Введите день, месяц и год (DD/MM/YYYY):\n";
    std::cin >> new_date.day >> ch >> new_date.month >> ch >> new_date.year;
    std::cout << "Дата: " << new_date.day << ch << new_date.month 
              << ch << new_date.year << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
