#include <iostream>
using namespace std;

class employee {
  private:
    int number;
    float compensation;
  public:
    employee() : number(0), compensation(0) {
    }
    employee(int n, float c) : number(n), compensation(c) {
    }
    void setData();
    void display()const;
};

void employee::setData() {
  cout << "Введите номер сотрудника: ";
  cin >> number;
  cout << "Введите величину пособия: ";
  cin >> compensation;
  cout << endl;
}

void employee::display() const {
  cout << "Номер cотрудника: " << number << endl;
  cout << "Величина пособия: $" << compensation << endl;
}

int main() {
  employee emp1, emp2;
  employee emp3(74, 50);
  emp1.setData();
  emp2.setData();	
  cout << "\nСотрудник #1: ";
  emp1.display();
  cout << "\nСотрудник #2: ";
  emp2.display();
  cout << "\nСотрудник #3: ";
  emp3.display();

  cout << endl;

  return 0;
}
