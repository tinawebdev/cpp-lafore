// Программа получает от пользователя случайные дробные числа, сохраняет их в
// массиве, вычисляет среднее значение и выводит результат.
#include <iostream>
using namespace std;

const int SIZE = 100;

class fraction {
  private:
    int num;
    int den;
  public:
    fraction() { }
    fraction(int n, int d) : num(n), den(d) { lowterms(); }
    void input();
    void add(fraction f1, fraction f2);
    void mul(fraction f1, fraction f2);
    void lowterms();
    void output()const;
};

void fraction::input() {
  char slant;
  cin >> num >> slant >> den;
}

void fraction::add(fraction f1, fraction f2) {
  num = (f1.num*f2.den)+(f1.den*f2.num);
  den = f1.den*f2.den;
  lowterms();
}

void fraction::mul(fraction f1, fraction f2) {
  num = f1.num*f2.num;
  den = f1.den*f2.den;
  lowterms();
}

// сокращение дроби
void fraction::lowterms() {
  long tnum, tden, temp, gcd;

// используем неотрицательные значения (нужен cmath)
  tnum = labs(num);
  tden = labs(den);

// проверка знаменателя на 0
  if (tden == 0) {
    cout << "Недопустимый знаменатель!";
    exit(1);
    return;

// проверка числителя на 0
  } else if (tnum == 0) {
    num = 0;
    den = 1;
    return;
  }

  while (tnum != 0) {
// если числитель больше знаменателя, меняем их местами
    if (tnum < tden) {
      temp = tnum;
      tnum = tden;
      tden = temp;
    }
    tnum = tnum - tden;
  }

// делим числитель и знаменатель на полученный общий делитель
  gcd = tden;
  num = num/gcd;
  den = den/gcd;
}

void fraction::output()const {
  cout << num << '/' << den;
}

int main() {
  fraction f[SIZE];
  char ch = 'n';
  int n = 0;

  do {
    if (n == SIZE) {
      ch = 'n';
      break;
    }
    cout << "Введите обыкновенную дробь:" << endl;
    f[n++].input();
    cout << "Продолжить (y/n)? "; 
    cin >> ch;
  } while ('y' == ch);

  fraction sum(0, 1);
  for (int j = 0; j < n; j++) {
    sum.add(sum, f[j]);
  }

  fraction average;
  fraction divider(1, n);
  average.mul(sum, divider);
  cout << "\nСреднее арифметическое введенных дробей: ";
  average.output();

  cout << endl;
  return 0;
}
