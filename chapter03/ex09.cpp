// Программа запрашивает число гостей и число свободных мест за столом
// (при этом предполагается, что число гостей не меньше числа мест, а 
// затем считает сколькими способами можно разместить гостей
#include <iostream>
#include <iomanip>

int main()
{
    int guests, chairs, total = 1;
    std::cout << "Введите число гостей: ";
    std::cin >> guests;
    std::cout << "Введите кол-во мест: ";
    std::cin >> chairs;

    if (guests > chairs) {
        for (int i = 0; i < chairs; i++) {
            total *= guests;
            guests--;
        }
    }

    std::cout << "\nКоличество возможных способов: " << total << std::endl;
    return 0;
}
