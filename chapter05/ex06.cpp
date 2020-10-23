// Модифицированная версия программы упр.11 гл.4
#include <iostream>
using namespace std;

struct time_s
{
    int hours;
    int minutes;
    int seconds;
    long total_seconds;
};

long time_to_secs(time_s time);
time_s secs_to_time(long seconds);

int main()
{
    time_s t1, t2, t3;
    char ch = ':';

    cout << "Введите время t1 в формате (HH:MM:SS): ";
    cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
    cout << "Введите время t2 в формате (HH:MM:SS): ";
    cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;

    t1.total_seconds = time_to_secs(t1);
    t2.total_seconds = time_to_secs(t2);

    t3.total_seconds = (t1.total_seconds + t2.total_seconds);
    t3 = secs_to_time(t3.total_seconds);

    cout << "Сумма равна: " << t3.hours << ch << t3.minutes << ch << t3.seconds << endl;

    return 0;
}

long time_to_secs(time_s t)
{
    long seconds = t.hours * 3600 + t.minutes * 60 + t.seconds;
    return seconds;
}

time_s secs_to_time(long s)
{
    time_s t;
    t.hours = s / 3600;
    t.minutes = s % 3600 / 60;
    t.seconds = s % 60;
    return t;
}
