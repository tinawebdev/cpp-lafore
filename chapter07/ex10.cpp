#include <iostream>
using namespace std;

class matrix {
  private:
    static const int ROWS = 10;
    static const int COLS = 10;
    int arr[ROWS][COLS];
    int mrows;
    int mcols;
  public:
    matrix(int mr, int mc) {
      if ((mr > 0 && mr <= ROWS) && (mc > 0 && mc <= COLS)) {
        mrows = mr;
        mcols = mc;
      } else {
        exit(1);
      }
    }
    void putel(int irow, int icol, int el);
    int getel(int irow, int icol);
};

void matrix::putel(int irow, int icol, int el) {
  if ((irow >= 0 && irow < mrows) && (icol >= 0 && icol < mcols))
    arr[irow][icol] = el;
  else {
    cout << "Индекс лежит вне пределов массива!\n";
  }
}

int matrix::getel(int irow, int icol) {
  if ((irow >= 0 && irow < mrows) && (icol >= 0 && icol < mcols))
      return arr[irow][icol];
  else {
    cout << "Индекс лежит вне пределов массива!\n";
    exit(1);
  }
}

int main() {
  matrix m1(3, 4);
  int temp = 12345;

//   m1.putel(7, 4, temp);
//   temp = m1.getel(7, 4);

  m1.putel(2, 3, temp);
  temp = m1.getel(2, 3);

  return 0;
}
