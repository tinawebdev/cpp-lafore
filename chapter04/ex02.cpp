// Программа, использующая для интерпретации точки на плоскости структуру
// с названием point
#include <iostream>

struct point
{
    int x;
    int y;
};

int main()
{
    point p1, p2, p3;
    std::cout << "Введите координаты точки p1: ";
    std::cin >> p1.x >> p1.y;
    std::cout << "Введите координаты точки p2: ";
    std::cin >> p2.x >> p2.y;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    std::cout << "Координаты точки p1+p2 равны " << p3.x << ", " << p3.y;
    std::cin.get();
    std::cin.get();
    return 0;
}
