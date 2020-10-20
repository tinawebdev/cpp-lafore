// Использование структуры для моделирования объема
#include <iostream>

struct Distance
{
    int feet;
    float inches;
};

struct Volume
{
    Distance length;
    Distance width;
    Distance height;
};

int main()
{
    float length, width, height, volume;
    Volume room = {{15, 2.25}, {10, 5.5}, {8, 1.25}};

    length = room.length.feet + room.length.inches/12.0;
    width = room.width.feet + room.width.inches/12.0;
    height = room.height.feet + room.height.inches/12.0;

    volume = length*width*height;

    std::cout << "Объем = " << volume << " м3" << std::endl;
    std::cin.get();
    std::cin.get();
    return 0;
}
