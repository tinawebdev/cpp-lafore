// Программа-калькулятор, выполняющая действия над денежными суммами,
// выраженными в фунтах, шилингах и пенсах
#include <iostream>

int main()
{
    int res_pound, res_shilling, res_pence, pound1, pound2, shilling1, shilling2, pence1, pence2;
    char sym, ch, option;
    double num;

    do {
        std::cout << "Введите первую сумму:" << std::endl;
        std::cin >> pound1 >> sym >> shilling1 >> sym >> pence1;

        std::cout << "Выберете операцию: +, -, *: ";
        std::cin >> option;

        switch (option) {
            case '+':
                std::cout << "Введите вторую сумму:" << std::endl;
                std::cin >> pound2 >> sym >> shilling2 >> sym >> pence2;
                
                res_pound = pound1 + pound2;
                res_shilling = shilling1 + shilling2;
                res_pence = pence1 + pence2;
                
                if(res_pence > 11) {
                    res_shilling += (res_pence/12);
                    res_pence = res_pence%12;
                }

                if(res_shilling > 19) {
                    res_pound += (res_shilling/20);
                    res_shilling = res_shilling%20;
                }

                std::cout << "Всего: " << res_pound << "." << res_shilling 
                  << "." << res_pence << std::endl;
                break;
            case '-':
                std::cout << "Введите вторую сумму:" << std::endl;
                std::cin >> pound2 >> sym >> shilling2 >> sym >> pence2;
                
                res_pound = pound1 - pound2;
                res_shilling = shilling1 - shilling2;
                res_pence = pence1 - pence2;

                if(res_pence < 0) {
                    res_shilling--;
                    res_pence += 12;
                }

                if(res_shilling < 0) {
                    res_pound--;
                    res_shilling += 20;
                }

                std::cout << "Всего: " << res_pound << "." << res_shilling 
                  << "." << res_pence << std::endl;
                break;
            case '*':
                std::cout << "Введите число: ";
                std::cin >> num;

                res_pound = pound1 * num;
                res_shilling = shilling1 * num;
                res_pence = pence1 * num;
                
                if(res_pence > 11) {
                    res_shilling += (res_pence/12);
                    res_pence = res_pence%12;
                }

                if(res_shilling > 19) {
                    res_pound += (res_shilling/20);
                    res_shilling = res_shilling%20;
                }

                std::cout << "Всего: " << res_pound << "." << res_shilling 
                  << "." << res_pence << std::endl;
                break;
            default:
                std::cout << "Ошибка ввода!" << std::endl;
                break;
        }
        std::cout << "Продолжить? (y/n)" << std::endl;
        std::cin >> ch;
    } while (ch == 'y');

    return 0;
}
