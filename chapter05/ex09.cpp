#include <iostream>
using namespace std;

struct time_s
{
    int hours;
    int minutes;
    int seconds;
};

void swap (time_s &time1, time_s &time2);

int main()
{
    time_s t1, t2;
    char ch = ':';

    cout << "Введите время t1 в формате (HH:MM:SS): ";
    cin >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds;
    cout << "Введите время t2 в формате (HH:MM:SS): ";
    cin >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;

    swap(t1, t2);
    cout << "t1 = " << t1.hours << ch << t1.minutes << ch << t1.seconds 
         << "\nt2 = " << t2.hours << ch << t2.minutes << ch << t2.seconds << endl;
}

void swap (time_s &t1, time_s &t2)
{
    time_s t;
    t.hours = t1.hours;
    t1.hours = t2.hours;
    t2.hours = t.hours;
    t.minutes = t1.minutes;
    t1.minutes = t2.minutes;
    t2.minutes = t.minutes;
    t.seconds = t1.seconds;
    t1.seconds = t2.seconds;
    t2.seconds = t.seconds;
}
