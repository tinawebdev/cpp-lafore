#include <iostream>
using namespace std;

class Int {
  private:
    int value;
  public:
    Int():value(0) {
    }
    Int(int num):value(num) {
    }
    operator int() {return value;}
    Int operator+(Int n2);
    Int operator-(Int n2);
    Int operator*(Int n2);
    Int operator/(Int n2);
    void display();
    Int check(long double result);
};

void Int::display() {
  cout << value;
}

Int Int::check(long double result) {
  if (result > 2147483647.0L || result < -2147483647.0L) {
    cout << "Ошибка!";
    exit(1);
  }
  return Int(int(result));
}

Int Int::operator+(Int n2) {
  return check(static_cast<long double>(value) + n2.value);
}

Int Int::operator-(Int n2) {
  return check(static_cast<long double>(value) - n2.value);
}

Int Int::operator*(Int n2) {
  return check(static_cast<long double>(value) * n2.value);
}

Int Int::operator/(Int n2) {
  return check(static_cast<long double>(value) / n2.value);
}

int main() {
  Int n1(30);
  Int n2(5);
  Int n3;

  cout << "n1 = ";
  n1.display();
  cout << endl;

  cout << "n2 = ";
  n2.display();
  cout << endl;

  n3 = n1 + n2;
  cout << "n1 + n2 = ";
  n3.display();
  cout << endl;

  n3 = n1 - n2;
  cout << "n1 - n2 = ";
  n3.display();
  cout << endl;

  n3 = n1 * n2;
  cout << "n1 * n2 = ";
  n3.display();
  cout << endl;

  n3 = n1 / n2;
  cout << "n1 / n2 = ";
  n3.display();
  cout << endl;

  return 0;
}
