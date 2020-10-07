// Программа циклически запрашивает ввод пользователем двух денежных
// сумм, выраженных в фунтах, шиллингах и пенсах. Затем складывает 
// введенные суммы и выводит на экран результат
#include <iostream>

int main()
{
    int res_pound, res_shilling, res_pence, pound1, pound2, shilling1, shilling2, pence1, pence2;
    char ch;

    do {
        std::cout << "Введите первую сумму:" << std::endl;
        std::cin >> pound1 >> shilling1 >> pence1;

        std::cout << "Введите вторую сумму:" << std::endl;
        std::cin >> pound2 >> shilling2 >> pence2;
        
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
        std::cout << "Продолжить? (y/n)" << std::endl;
        std::cin >> ch;
    } while (ch == 'y');

    return 0;
}
