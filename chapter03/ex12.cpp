// Программа-калькулятор, выполняющая четыре арифметических действия
// над дробями.
// Формулы, демонстрирующие выполнение арифметических операций над дробями:
//    Сложение:  a/b + c/d = (a*d + b*c)/(b*d)
//    Вычитание: a/b - c/d = (a*d - b*c)/(b*d)
//    Умножение: a/b * c/d = (a*c)/(b*d)
//    Деление:   a/b / c/d = (a*d)/(b*c)
#include <iostream>

int getNod(int a, int b) // Возвращает наибольший общий знаменатель
{ 
    if (b == 0)
        return a;
    return getNod(b, a % b);
}

int main()
{
    int a, b, c, d, res1, res2, nod;
    char sym, ch, option;

    do {
        std::cout << "Введите первую дробь:" << std::endl;
        std::cin >> a >> sym >> b;

        std::cout << "Выберете операцию: +, -, *, /: ";
        std::cin >> option;
        
        std::cout << "Введите вторую дробь:" << std::endl;
        std::cin >> c >> sym >> d;

        if((b == 0) || (d == 0)) {
            std::cout << "Ошибка! Знаменатель равен нулю";
        } else {
        
            switch (option) {
                case '+':
                    res1 = a*d + b*c;
                    res2 = b*d;

                    nod = getNod(res1, res2);
                    res1 /= nod; 
                    res2 /= nod;
                    
                    if ((res1 == 0) || (res2 == 1))
                        std::cout << "Результат: " << res1;
                    else 
                        std::cout << "Результат: " << res1 << '/' << res2;
                    break;
                case '-':
                    res1 = a*d - b*c;
                    res2 = b*d;
                    
                    nod = getNod(res1, res2);
                    res1 /= nod; 
                    res2 /= nod;

                    if ((res1 == 0) || (res2 == 1))
                        std::cout << "Результат: " << res1;
                    else 
                        std::cout << "Результат: " << res1 << '/' << res2;
                    break;
                case '*':
                    res1 = a*c;
                    res2 = b*d;
                    
                    nod = getNod(res1, res2);
                    res1 /= nod; 
                    res2 /= nod;

                    if ((res1 == 0) || (res2 == 1))
                        std::cout << "Результат: " << res1;
                    else 
                        std::cout << "Результат: " << res1 << '/' << res2;
                    break;
                case '/':
                    res1 = a*d;
                    res2 = b*c;
                    
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
