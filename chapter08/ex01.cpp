#include <iostream>
using namespace std;

class Distance {
 private:
  int feet;
  float inches;
 public:
  Distance() : feet(0), inches(0.0) {}
  Distance(int ft, float in) : feet(ft), inches(in) {}
  void getdist() {
    cout << "Введите число футов: ";
    cin >> feet;
    cout << "Введите число дюймов: ";
    cin >> inches;
  }
  void showdist() { cout << feet << "\'-" << inches << '\"'; }
  Distance operator+(Distance) const;
  Distance operator-(Distance) const;
};

Distance Distance::operator+(Distance d) const {
  int f = feet + d.feet;
  float i = inches + d.inches;
  if (i >= 12.0) {
    i -= 12.0;
    f++;
  }
  return Distance(f, i);
}

Distance Distance::operator-(Distance d) const {
  int f = feet - d.feet;
  float i = inches - d.inches;
  if (i < 0.0) {
    i += 12.0;
    f--;
  }
  return Distance(f, i);
}

int main() {
  Distance dist1(11, 6.25), dist2, dist3;
  dist2.getdist();

  dist3 = dist1 - dist2;

  cout << "dist1 = ";
  dist1.showdist();
  cout << "\ndist2 = ";
  dist2.showdist();
  cout << "\ndist3 = ";
  dist3.showdist();
  cout << endl;

  return 0;
}
