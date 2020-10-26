// Программа-калькулятор, выполняющая четыре арифметических действия
// над дробями (измененный вариант упр.№12 гл.4)
#include <iostream>

struct fraction
{
    int num;
    int den;
};

int gcd(int a, int b);
fraction get_gcd(fraction f);
fraction fadd(fraction f1, fraction f2);
fraction fsub(fraction f1, fraction f2);
fraction fmul(fraction f1, fraction f2);
fraction fdiv(fraction f1, fraction f2);
void disp(fraction f);

int main()
{
    fraction f1, f2, f3;
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
                    f3 = fadd(f1, f2);
                    disp(f3);
                    break;
                case '-':
                    f3 = fsub(f1, f2);
                    disp(f3);
                    break;
                case '*':
                    f3 = fmul(f1, f2);
                    disp(f3);
                    break;
                case '/':
                    f3 = fdiv(f1, f2);
                    disp(f3);
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

int gcd(int a, int b) // greatest common divisor
{ 
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

fraction get_gcd(fraction f)
{
    int d;
    d = gcd(f.num, f.den);
    f.num /= d; 
    f.den /= d;

    return f;
}

fraction fadd(fraction f1, fraction f2)
{
    fraction f;

    f.num = f1.num*f2.den + f1.den*f2.num;
    f.den = f1.den*f2.den;
    f = get_gcd(f);

    return f;
}

fraction fsub(fraction f1, fraction f2)
{
    fraction f;

    f.num = f1.num*f2.den - f1.den*f2.num;
    f.den = f1.den*f2.den;
    f = get_gcd(f);

    return f;
}

fraction fmul(fraction f1, fraction f2)
{
    fraction f;

    f.num = f1.num*f2.num;
    f.den = f1.den*f2.den;
    f = get_gcd(f);

    return f;
}

fraction fdiv(fraction f1, fraction f2)
{
    fraction f;

    f.num = f1.num*f2.den;
    f.den = f1.den*f2.num;
    f = get_gcd(f);

    return f; 
}

void disp(fraction f)
{
    if ((f.num == 0) || (f.den == 1))
        std::cout << "Результат: " << f.num;
    else 
        std::cout << "Результат: " << f.num << '/' << f.den;
}
