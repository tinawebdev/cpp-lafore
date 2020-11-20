#include <iostream>
using namespace std;
const char ESC = 27;
const double COST = 0.50;

class tollBooth {
  private:
    unsigned int carsCount;
    double totalCash;
  public:
    tollBooth() : carsCount(0), totalCash(0.0) {
    }
    void payingCar() {
      ++carsCount;
      totalCash += COST;
    }
    void nopayCar() {
      ++carsCount;
    }
    void display()const {
      cout << "\nЧисло машин: " << carsCount;
      cout << "\nСуммарная выручка в центах: " << totalCash;
    }
};

int main() {
  tollBooth tb;
  char ch = '0';

  cout << "Нажмите \n1 - для машины с оплатой проезда"
       << "\n2 - для машины без оплаты проезда"
       << "\nEsc - чтобы выйти" << endl;

  while (ch != ESC) {
    cin >> ch;
    if (ch == '1') {
      tb.payingCar();
    } else if (ch == '2') {
      tb.nopayCar();
    } else if (ch == ESC) {
      break;
    } else {
      cout << "Неверный ввод" << endl;
      break;
    }
  }

  tb.display();
  return 0;
}
