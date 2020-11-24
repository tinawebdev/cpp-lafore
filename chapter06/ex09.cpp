// Упражнение на основе структуры fraction из упр.8 гл.4.
// Программа циклически запрашивает у пользователя ввод пары дробей,
// затем складывает их, выводит результат на экран и после каждой такой
// операции спрашивает, следует ли продолжать цикл.

#include <iostream>
using namespace std;

class fraction {
  private:
    int num;
    int den;
  public:
    fraction():num(0), den(0) { };
    void getFraction();
    void add(fraction, fraction);
    void display()const;
};

void fraction::getFraction() {
  char slant;
  cin >> num >> slant >> den;
}

void fraction::add(fraction f1, fraction f2) {
  num = (f1.num*f2.den)+(f1.den*f2.num);
  den = f1.den*f2.den;
}

void fraction::display()const {
  cout << "Сумма двух дробей равна: " << num << "/" << den << endl;
}

int main() {
  char ch = 'y';
  fraction f1, f2, f3;

  do {
    cout << "Введите первую дробь в формате a/b: ";
    f1.getFraction();
    cout << "Введите вторую дробь в формате a/b: ";
    f2.getFraction();
    f3.add(f1, f2);
    f3.display();

    cout << "Хотите продолжить? (y/n)";
    cin >> ch;
    cout << ch;
  } while (ch != 'n');

  cout << endl;
  return 0;
}
