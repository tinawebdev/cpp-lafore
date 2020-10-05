// Эквивалент калькулятора, выполняющего четрые основных арифметических
// операции
#include <iostream>

int main()
{
    float val1, val2, result;
    char oper, choice = ' ';
    bool repeat = false;

    do {
        std::cout << "Введите первый операнд, операцию и второй операнд: ";
        std::cin >> val1 >> oper >> val2;

        switch (oper)
        {
            case '+':
                result = val1 + val2;
                std::cout << "Результат равен " << result;
                break;
            case '-':
                result = val1 - val2;
                std::cout << "Результат равен " << result;
                break;
            case '*':
                result = val1 * val2;
                std::cout << "Результат равен " << result;
                break;
            case '/':
                if (val2 == 0) {
                    std::cout << "На ноль делить нельзя.";
                } else {
                    result = val1 / val2;
                    std::cout << "Результат равен " << result;
                }
                break;
            default:
                std::cout << "Неизвестная операция.";
                break;
        }
        std::cout << std::endl;
        
        std::cout << "Выполнить еще одну операцию? (y/n): ";
        std::cin >> choice;

        if (choice == 'y') {
            repeat = true;
        } else {
            repeat = false;
        }
    } while (repeat);

    return 0;
}
