// По условию задания необходимо модифиировать калькулятор из упр.12 гл.5 так,
// чтобы вместо структуры fraction использовался одноименный класс. Класс должен
// содержать методы для ввода и вывода данных объектов, а также для выполнения
// арифметический операций. Кроме того, неоходимо включить в состав класса
// функцию, приводящую дробь к несократимому виду.

#include <iostream>
using namespace std;

class fraction {
  private:
    int num;
    int den;
  public:
    void input();
    void operations(fraction, fraction, char);
    void lowterms();
    void output()const;
};

void fraction::input() {
  char slant;
  cin >> num >> slant >> den;
}

void fraction::operations(fraction f1, fraction f2, char option) {
  switch (option) {
    case '+':
      num = (f1.num*f2.den)+(f1.den*f2.num);
      den = f1.den*f2.den;
      break;
    case '-':
      num = f1.num*f2.den - f1.den*f2.num;
      den = f1.den*f2.den;
      break;
    case '*':
      num = f1.num*f2.num;
      den = f1.den*f2.den;
      break;
    case '/':
      num = f1.num*f2.den;
      den = f1.den*f2.num;
      break;
    default:
      std::cout << "Ошибка ввода!" << std::endl;
      break;
  }
}

// сокращение дроби
void fraction::lowterms() {
  long tnum, tden, temp, gcd;

// используем неотрицательные значения (нужен cmath)
  tnum = labs(num);
  tden = labs(den);

// проверка знаменателя на 0
  if (tden == 0) {
    cout << "";
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
  if ((num == 0) || (den == 1))
    cout << "Результат: " << num;
  else
    cout << "Результат: " << num << '/' << den;
}

int main() {
  fraction f1, f2, f3;
  cout << "Введите первую дробь:" << endl;
  f1.input();
  cout << "Введите вторую дробь:" << endl;
  f2.input();

  char ch = ' ';
  cout << "Выберете операцию (+, -, *, /): ";
  cin >> ch;
  f3.operations(f1, f2, ch);
  f3.lowterms();
  f3.output();

  cout << endl;
  return 0;
}
