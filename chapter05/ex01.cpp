#include <iostream>
using namespace std;

float circarea(float);

int main()
{
    float rad;
    cout <<"Введите радиус окружности: ";
    cin >> rad;
    cout << "Площадь круга равна " << circarea(rad) << endl;
}

float circarea(float rad)
{
    const float PI = 3.14159F;
    return PI * rad * rad;
}
