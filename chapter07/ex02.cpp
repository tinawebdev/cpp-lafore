// Программа предлагает пользователю ввести до 100 служащих, затем выводит
// их на экран.
#include <iostream>
#include <string>

using namespace std;
const int MAX = 100;

class employee {
  private:
    string name;
    long number;
  public:
    void getdata();
    void putdata();
};

void employee::getdata() {
  cout << "Введите имя: ";
  cin >> name;
  cout << "Введите номер: ";
  cin >> number;
}

void employee::putdata() {
  cout << "Имя: " << name << endl;
  cout << "Номер: " << number << endl;
}

int main() {
  employee arr[MAX];
  int n = 0;
  char ch = 'y';
  do {
    cout << "Введите данные о работнике №" << n+1 << endl;
    arr[n++].getdata();

    if (n >= MAX) {
      ch = 'n';
      break;
    }

    cout << "Продолжить? (y/n): ";
    cin >> ch;
  } while ('y' == ch);

  for (int i=0; i < n; i++) {
    cout << "\nНомер работника " << i+1 << endl;
    arr[i].putdata();
    cout << endl;
  }

  cout << endl;
  return 0;
}
