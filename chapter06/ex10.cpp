// По условию задания необходимо написать класс с именем ship, который будет
// содержать данные об учетном номере корабля и координатах его расположения,
// разработать метод, который будет сохранять в объекте данные о корабле,
// вводимые пользователем, и метод, выводящий данные о корабле на экран.

#include <iostream>
using namespace std;

class angle {
  private:
    int degrees;
    float minutes;
    char direction;
  public:
    void input();
    void displayAngle()const;
};

class ship {
  private:
    angle latitude, longitude;
    static int count;
    unsigned int serialNumber;
  public:
    ship() {
      ++count;
      serialNumber = count;
    }
    void getPosition();
    void displayShip() const;
};

int ship::count = 0;

void angle::input() {
  cout <<"\nВведите градусы: ";
  cin >> degrees;
  cout <<"Введите минуты: ";
  cin >> minutes;
  cout <<"Введите направление (N, S, E, W): ";
  cin >> direction;
}

void angle::displayAngle()const {
  cout << degrees << '\xF8' << minutes << "\' " << direction;
}

void ship::getPosition() {
  cout <<  "Введите широту корабля:";
  latitude.input();
  cout <<  "Введите долготу корабля:";
  longitude.input();
}

void ship::displayShip()const {
  cout << "Номер корабля: " << serialNumber;
  cout << endl;
  latitude.displayAngle();
  cout << " ";
  longitude.displayAngle();
  cout << endl;
}

int main() {
  ship ship1, ship2, ship3;

  cout << "Введите координаты первого корабля" << endl;
  ship1.getPosition();
  cout << endl;
  cout << "Введите координаты второго корабля" << endl;
  ship2.getPosition();
  cout << endl;
  cout << "Введите координаты третьего корабля" << endl;
  ship3.getPosition();
  cout << endl;

  cout << "Корабль 1:" << endl;
  ship1.displayShip();
  cout << endl;
  cout << "Корабль 2:" << endl;
  ship2.displayShip();
  cout << endl;
  cout << "Корабль 3:" << endl;
  ship3.displayShip();

  cout << endl;
  return 0;
}
