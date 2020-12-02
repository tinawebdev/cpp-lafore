#include <iostream>
using namespace std;

class safearay {
  private:
    static const int LIMIT = 10;
    int sar[LIMIT];
  public:
    void putel(int idx, int el);
    int getel(int idx);
};

void safearay::putel(int idx, int el) {
  if ((idx >= 0) && (idx < LIMIT))
    sar[idx] = el;
  else
    cout << "Запись в массив не выполнена!" << endl;
}

int safearay::getel(int idx) {
  if ((idx >= 0) && (idx < LIMIT))
    return sar[idx];
  else {
    cout << "Невозможно получить запись из массива!" << endl;
    exit(1);
  }
}

int main() {
  safearay sa1;
  int temp = 12345;

  sa1.putel(7, temp);
  temp = sa1.getel(7);

  sa1.putel(-1, temp);
  sa1.putel(10, temp);
  temp = sa1.getel(10);

  return 0;
}
