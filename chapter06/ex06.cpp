#include <iostream>
using namespace std;

enum etype {laborer, secretary, manager};

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
  char ch = '/';
  cout << "Введите дату приема сотрудника на работу (DD/MM/YYYY):\n";
  cin >> day >> ch >> month >> ch >> year;
  cout << endl;
}

void dates::showDate()const {
  cout << "Дата: " << day << "/" << month << "/" << year;
}

class employee {
  private:
    int number;
    float compensation;
    dates dt;
    etype emp;
  public:
    void putemploy();
    void getemploy()const;
};

void employee::putemploy() {
  cout << "Введите номер сотрудника: ";
  cin >> number;
  cout << "Введите величину пособия: ";
  cin >> compensation;
  dt.getDate();
  char selectType;
  cout << "Введите тип сотрудника:"
       << "\n'l' -  лаборант, \n's' - секретарь, \n'm' - менеджер\n";
  cin >> selectType;
  switch(selectType) {
    case 'l':
      emp = laborer;
      break;
    case 's':
      emp = secretary;
      break;
    case 'm':
      emp = manager;
      break;
    default:
      cout << "Неправильный тип!";
  }
  cout << endl;
}

void employee::getemploy()const {
  cout << "Номер cотрудника: " << number << endl;
  cout << "Величина пособия: $" << compensation << endl;
  dt.showDate();
  cout <<"\nТип сотрудника: ";
  switch(emp) {
    case laborer:
      cout << "лаборант";
      break;
    case secretary:
      cout << "секретарь";
      break;
    case manager:
      cout << "менеджер";
      break;
  }
}

int main() {
  employee emp1, emp2, emp3;

  cout << "Введите данные о сотруднике #1:\n";
  emp1.putemploy();
  cout << "\nВведите данные о сотруднике #2:\n";
  emp2.putemploy();
  cout << "\nВведите данные о сотруднике #3:\n";
  emp3.putemploy();
  cout << endl;
  cout << "Сотрудник #1:\n";
  emp1.getemploy();
  cout << endl;
  cout << "\nСотрудник #2:\n";
  emp2.getemploy();
  cout << endl;
  cout << "\nСотрудник #3:\n";
  emp3.getemploy();
  cout << endl;

  return 0;
}
