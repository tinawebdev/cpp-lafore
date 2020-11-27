// Программа считает среднее расстояние длин, введенных пользователем.
#include <iostream>
using namespace std;

const int MAX = 100;

class Distance {
  private:
    int feet;
    float inches;
  public:
    Distance() : feet(0), inches(0) {}
    Distance(int ft, float in) : feet(ft), inches(in) {}
    void getDist();
    void showDist();
    void addDist(Distance d);
    void divDist(int);
};

void Distance::getDist() {
  cout << "\nВведите футы: ";
  cin >> feet;
  cout << "Введите дюймы: ";
  cin >> inches;
  cout << endl;
}

void Distance::showDist() {
  cout << feet << "\'-" << inches << '\"';
}

void Distance::addDist(Distance d) {
  inches += d.inches;
  feet += d.feet;
  if (inches >= 12.0) {
    inches -= 12.0;
    feet++;
  }
}

void Distance::divDist(int divisor) {
  int total = feet * 12.0 + inches;
  total /= divisor;
  feet = total / 12;
  inches = total % 12;
}

int main() {
  Distance d[MAX];
  Distance sum;
  int count = 0;
  char ch = 'n';

  do {
    cout << "Введите расстояние ";
    d[count].getDist();
    sum.addDist(d[count++]);

    if (count >= MAX) {
      ch = 'n';
      break;
    } else {
      cout << "Продолжить? (y/n): ";
      cin >> ch;
    }
  } while ('y' == ch);

  sum.divDist(count);
  cout << "\nСреднее: ";
  sum.showDist();
  cout << endl;

  return 0;
}
