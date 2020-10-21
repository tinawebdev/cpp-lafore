// Программа запрашивает у пользователя два значения времени в формате
// 12:59:59, переводит в секунды, складывает, переводит в сумму в исходный
// формат и выводит на экран полученный результат
#include <iostream>
using namespace std;

struct time_s
{
    int hours;
    int minutes;
    int seconds;
    int total_seconds;
};

int total_seconds(time_s t)
{
    int seconds = t.hours * 3600 + t.minutes * 60 + t.seconds;
    return seconds;
}

int main()
{
    time_s t1, t2, t3;
    char ch = ':';
    int total_time;

    cout << "Введите время t1 в формате (HH:MM:SS): ";
    cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
    cout << "Введите время t2 в формате (HH:MM:SS): ";
    cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;

    t1.total_seconds = total_seconds(t1);
    t2.total_seconds = total_seconds(t2);

    total_time = (t1.total_seconds + t2.total_seconds);
    t3.hours = total_time / 3600;
    t3.minutes = total_time % 3600 / 60;
    t3.seconds = total_time % 60;

    cout << "Сумма равна: " << t3.hours << ch << t3.minutes << ch << t3.seconds << endl;

    return 0;
}
