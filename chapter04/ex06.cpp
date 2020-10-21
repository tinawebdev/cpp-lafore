// Программа, которая по первой букве должности, введенной пользователем,
// определяет соответствующее значение переменной, помещает это значение 
// в переменную etype, а затем выводит полностью название должности, первую
// букву которой ввел пользователь
#include <iostream>

enum etype {laborer, secretary, manager, accountant, executive, researcher};

int main()
{
    etype employee_type;
    char type;

    std::cout << "Введите первую букву должности: ";
    std::cin >> type;

    switch (type){
        case 'l': employee_type = laborer; break;
        case 's': employee_type = secretary; break;
        case 'm': employee_type = manager; break;
        case 'a': employee_type = accountant; break;
        case 'e': employee_type = executive; break;
        case 'r': employee_type = researcher; break;
        default:
            std::cout << "Ошибка ввода";
            break;
    }

    switch(employee_type){
        case laborer:
            std::cout << "Полное название должности: laborer";
            break;
        case secretary:
            std::cout << "Полное название должности: secretary";
            break;
        case manager:
            std::cout << "Полное название должности: manager";
            break;
        case accountant:
            std::cout << "Полное название должности: accountant";
            break;
        case executive:
            std::cout << "Полное название должности: executive";
            break;
        case researcher:
            std::cout << "Полное название должности: researcher";
            break;
    }
    std::cout << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
