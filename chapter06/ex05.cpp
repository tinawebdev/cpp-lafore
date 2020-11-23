#include <iostream>
using namespace std;

class dates {
  private:
    int month;
    int day;
    int year;
  public:
    void getDate();
    void showDate()const;
};

void dates::getDate() {
  cout << "Введите день:\n";
  cin >> day;
  cout << "Введите месяц:\n";
  cin >> month;
  cout << "Введите год:\n";
  cin >> year;
  cout << endl;
}

void dates::showDate()const {
  cout << "Дата: " << day << "/" << month << "/" << year;
}

int main() {
  dates dt;
  dt.getDate();
  dt.showDate();
  cout << endl;

  return 0;
}
