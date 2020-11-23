#include <iostream>
using namespace std;

class numberCount {
  private:
    static int count;
    unsigned int serialNumber;
  public:
    numberCount() {
      ++count;
      serialNumber = count;
    }
    void display()const;
};

int numberCount::count = 0;

void numberCount::display()const {
  cout << "Мой порядковый номер: " << serialNumber;
}

int main() {
  numberCount n1, n2, n3;
  n1.display();
  cout << endl;
  n2.display();
  cout << endl;
  n3.display();
  cout << endl;

  return 0;
}
