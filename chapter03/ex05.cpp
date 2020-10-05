// Пирамида из символов 'X'
#include <iostream>
#include <iomanip>

int main()
{
    for (int k = 1; k <= 20; k++)
    {
        std::cout << std::setw(21 - k) << " ";
        for (int i = 1; i < k*2; i++)
        {
            std::cout << "X";
        }
        std::cout << std::endl;
    }
    return 0;
}
