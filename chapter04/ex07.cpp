#include <iostream>
#include <iomanip>
#include <string>

enum etype {laborer, secretary, manager, accountant, executive, researcher};

struct date
{
    int month;
    int day;
    int year;
};

struct employee
{
    int number;
    float compensation;
    etype employee_type;
    date hiring_date;
};

std::string employee_type(int e)
{
    std::string e_type;
    switch (e)
    {
        case laborer: e_type = "Laborer"; break;
        case secretary: e_type = "Secretary"; break;
        case manager: e_type = "Manager"; break;
        case accountant: e_type = "Accountant"; break;
        case executive: e_type = "Executive"; break;
        case researcher: e_type = "Researcher"; break;
    }
    return e_type;
}

int main()
{
    employee e1, e2, e3;
    char ch = '/';
    char e_type;

    std::cout << "Сотрудник #1:" << "\n\tНомер: ";
    std::cin >> e1.number;
    std::cout << "\tВеличина пособия: ";
    std::cin >> e1.compensation;
    std::cout << "\tДолжность:\n";
    std::cout << "\tl - laborer;\ts - secretary;\tm - manager;\n"
              << "\ta - accountant;\te - executive;\tr - researcher.\n"
              << "\t(l, s, m, a, e, r): ";
    std::cin >> e_type;
    switch (e_type){
        case 'l': e1.employee_type = laborer; break;
        case 's': e1.employee_type = secretary; break;
        case 'm': e1.employee_type = manager; break;
        case 'a': e1.employee_type = accountant; break;
        case 'e': e1.employee_type = executive; break;
        case 'r': e1.employee_type = researcher; break;
        default:
            std::cout << "Ошибка ввода";
            break;
    }
    std::cout << "\tДата принятия на работу (DD/MM/YYYY): ";
    std::cin >> e1.hiring_date.day >> ch >> e1.hiring_date.month >> ch
             >> e1.hiring_date.year;


    std::cout << "Сотрудник #2:" << "\n\tНомер: ";
    std::cin >> e2.number;
    std::cout << "\tВеличина пособия: ";
    std::cin >> e2.compensation;
    std::cout << "\tДолжность:\n";
    std::cout << "\tl - laborer;\ts - secretary;\tm - manager;\n"
              << "\ta - accountant;\te - executive;\tr - researcher.\n"
              << "\t(l, s, m, a, e, r): ";
    std::cin >> e_type;
    switch (e_type){
        case 'l': e2.employee_type = laborer; break;
        case 's': e2.employee_type = secretary; break;
        case 'm': e2.employee_type = manager; break;
        case 'a': e2.employee_type = accountant; break;
        case 'e': e2.employee_type = executive; break;
        case 'r': e2.employee_type = researcher; break;
        default:
            std::cout << "Ошибка ввода";
            break;
    }

    std::cout << "\tДата принятия на работу (DD/MM/YYYY): ";
    std::cin >> e2.hiring_date.day >> ch >> e2.hiring_date.month >> ch
             >> e2.hiring_date.year;

    std::cout << "Сотрудник #3:" << "\n\tНомер: ";
    std::cin >> e3.number;
    std::cout << "\tВеличина пособия: ";
    std::cin >> e3.compensation;
    std::cout << "\tДолжность:\n";
    std::cout << "\tl - laborer;\ts - secretary;\tm - manager;\n"
              << "\ta - accountant;\te - executive;\tr - researcher.\n"
              << "\t(l, s, m, a, e, r): ";
    std::cin >> e_type;
    switch (e_type){
        case 'l': e3.employee_type = laborer; break;
        case 's': e3.employee_type = secretary; break;
        case 'm': e3.employee_type = manager; break;
        case 'a': e3.employee_type = accountant; break;
        case 'e': e3.employee_type = executive; break;
        case 'r': e3.employee_type = researcher; break;
        default:
            std::cout << "Ошибка ввода";
            break;
    }
    std::cout << "\tДата принятия на работу (DD/MM/YYYY): ";
    std::cin >> e3.hiring_date.day >> ch >> e3.hiring_date.month >> ch
             >> e3.hiring_date.year;

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
              
    std::cout << std::setiosflags(std::ios::left) << std::setw(16) 
              << employee_type(e1.employee_type) << std::setw(16)
              << employee_type(e2.employee_type) << std::setw(16)
              << employee_type(e3.employee_type) << std::endl;

    std::cout << std::setiosflags(std::ios::left) << std::setw(2) 
              << e1.hiring_date.day << std::setw(1) << ch
              << std::setw(2) << e1.hiring_date.month
              << std::setw(1) << ch << std::setw(10) 
              << e1.hiring_date.year << std::setw(2)
              << e2.hiring_date.day << std::setw(1) << ch
              << std::setw(2) << e2.hiring_date.month
              << std::setw(1) << ch << std::setw(10) 
              << e2.hiring_date.year << std::setw(2)
                            << e3.hiring_date.day << std::setw(1) << ch
              << std::setw(2) << e3.hiring_date.month
              << std::setw(1) << ch << std::setw(10) 
              << e3.hiring_date.year << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
