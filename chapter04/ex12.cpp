// Программа-калькулятор, выполняющая четыре арифметических действия
// над дробями (измененный вариант упр.№12 гл.3)
#include <iostream>

struct fraction
{
    int num;
    int den;
};

int getNod(int a, int b) // Возвращает наибольший общий знаменатель
{ 
    if (b == 0)
        return a;
    return getNod(b, a % b);
}

int main()
{
    fraction f1, f2;
    int res1, res2, nod;
    char sym, ch, option;

    do {
        std::cout << "Введите первую дробь:" << std::endl;
        std::cin >> f1.num >> sym >> f1.den;

        std::cout << "Выберете операцию: +, -, *, /: ";
        std::cin >> option;
        
        std::cout << "Введите вторую дробь:" << std::endl;
        std::cin >> f2.num >> sym >> f2.den;

        if((f1.den == 0) || (f2.den == 0)) {
            std::cout << "Ошибка! Знаменатель равен нулю";
        } else {
        
            switch (option) {
                case '+':
                    res1 = f1.num*f2.den + f1.den*f2.num;
                    res2 = f1.den*f2.den;

                    nod = getNod(res1, res2);
                    res1 /= nod; 
                    res2 /= nod;
                    
                    if ((res1 == 0) || (res2 == 1))
                        std::cout << "Результат: " << res1;
                    else 
                        std::cout << "Результат: " << res1 << '/' << res2;
                    break;
                case '-':
                    res1 = f1.num*f2.den - f1.den*f2.num;
                    res2 = f1.den*f2.den;
                    
                    nod = getNod(res1, res2);
                    res1 /= nod; 
                    res2 /= nod;

                    if ((res1 == 0) || (res2 == 1))
                        std::cout << "Результат: " << res1;
                    else 
                        std::cout << "Результат: " << res1 << '/' << res2;
                    break;
                case '*':
                    res1 = f1.num*f2.num;
                    res2 = f1.den*f2.den;
                    
                    nod = getNod(res1, res2);
                    res1 /= nod; 
                    res2 /= nod;

                    if ((res1 == 0) || (res2 == 1))
                        std::cout << "Результат: " << res1;
                    else 
                        std::cout << "Результат: " << res1 << '/' << res2;
                    break;
                case '/':
                    res1 = f1.num*f2.den;
                    res2 = f1.den*f2.num;
                    
                    nod = getNod(res1, res2);
                    res1 /= nod; 
                    res2 /= nod;

                    if ((res1 == 0) || (res2 == 1))
                        std::cout << "Результат: " << res1;
                    else 
                        std::cout << "Результат: " << res1 << '/' << res2;
                    break;
                default:
                    std::cout << "Ошибка ввода!" << std::endl;
                    break;
            }
        }
        std::cout << std::endl;
        std::cout << "Продолжить? (y/n)" << std::endl;
        std::cin >> ch;
    } while (ch == 'y');

    return 0;
}
