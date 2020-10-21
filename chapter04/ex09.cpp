// Программа запрашивает у пользователя время в формате час, минуты, секунды
// и выводит количество секунд в введенном времени
#include <iostream>
using namespace std;

struct time_s
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    time_s t;
    char ch = ':';
    cout << "Введите время в формате (HH:MM:SS): ";
    cin >> t.hours >> ch >> t.minutes >> ch >> t.seconds;
    int total_seconds = t.hours * 3600 + t.minutes * 60 + t.seconds;
    cout << "Всего секунд: " << total_seconds << endl;

    return 0;
}
