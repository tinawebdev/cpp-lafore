#include <iostream>
using namespace std;

class angle {
  private:
    int degrees;
    float minutes;
    char direction;
  public:
    angle() : degrees(0), minutes(0), direction(0) { }
    angle(int deg, float min, char dir) : degrees(deg), minutes(min), direction(dir) { }
    void input();
    void display()const;
};

void angle::input() {
  cout <<"\nВведите градусы: ";
  cin >> degrees;
  cout <<"Введите минуты: ";
  cin >> minutes;
  cout <<"Введите направление (N, S, E, W): ";
  cin >> direction;
}

void angle::display()const {
  cout << degrees << '\xF8' << minutes << "\' " << direction;
}

int main() {
  angle a1(149, 34.8, 'W');
  a1.display();
  char ch;
  do {
    angle a2;
    a2.input();
    a2.display();
    cout << "\nПродолжить (y/n)? ";
    cin >> ch;
  } while(ch != 'n');
  return 0;
}
