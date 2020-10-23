// Программа возвращает значение наибольшего из аргументов
#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance bigengl(Distance, Distance);
void engldisp(Distance);
void repchar();

int main()
{
    Distance d1, d2, d3;
    cout << "Введите число футов: ";
    cin >> d1.feet;
    cout << "Введите число дюймов: ";
    cin >> d1.inches;
    repchar();
    cout << "Введите число футов: ";
    cin >> d2.feet;
    cout << "Введите число дюймов: ";
    cin >> d2.inches;
    repchar();
    d3 = bigengl(d1, d2);    
    cout << "d1 = "; engldisp(d1);
    cout << "d2 = "; engldisp(d2);
    cout << "Наибольшее (d3) = "; engldisp(d3);
    cout << endl;
    return 0;
}

Distance bigengl(Distance d1, Distance d2)
{
    if(d1.feet > d2.feet)
        return d1;
    if(d1.feet < d2.feet)
        return d2;
    if(d1.inches > d2.inches) 
        return d1;
    else
        return d2;
}

void engldisp(Distance d)
{
    cout << d.feet << "\'" << d.inches << "\"" << endl;
}

void repchar()
{
    for(int i=0; i < 45; i++)
    {
        cout << "-";
    }
    cout << endl;
}
