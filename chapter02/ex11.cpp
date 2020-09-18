#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setiosflags(ios::left) << setw(15) << "Last name" 
         << setw(10) << "Name" << setw(15) << "Adress" 
         << setw(13) << "City" << endl;
    cout << setfill('-') << setw(53) << "" << endl;
    cout << setfill(' ') << setw(15) << "Petrov" 
         << setw(10) << "Vasiliy" << setw(15) << "Klenovaya 16" 
         << setw(13) << "St.Petersburg" << endl;
    cout << setiosflags(ios::left) << setw(15) << "Ivanov" 
         << setw(10) << "Sergey" << setw(15) << "Osinovay 3" 
         << setw(13) << "Nahodka" << endl;
    cout << setiosflags(ios::left) << setw(15) << "Sidorov" 
         << setw(10) << "Ivan" << setw(15) << "Berezovaya 21" 
         << setw(13) << "Kaliningrad" << endl;
    return 0;
}
