#include <iostream>
using namespace std;

long hms_to_secs(int hours, int minutes, int seconds);
int main()
{
    char ch;
    do
    {
        cout << "Введите время в формате HH:MM:SS: ";
        char sym;
        int h, m, s;
        cin >> h >> sym >> m >> sym >> s;
        long totalSec = hms_to_secs(h, m, s);
        cout << "Всего: " << totalSec << " секунд.\n";
        cout << "Продолжить (y/n)? ";
        cin >> ch;
    } while (ch != 'n');
    return 0;
}

long hms_to_secs(int hrs, int mins, int secs)
{
    long seconds = hrs * 3600 + mins * 60 + secs;
    return seconds;
}
