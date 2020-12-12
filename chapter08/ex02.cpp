#include <iostream>
#include <cstring>
using namespace std;

class String {
 private:
  static const int SZ = 80;
  char str[SZ];
 public:
  String() { strcpy(str, ""); }
  String(char s[]) { strcpy(str, s); }
  void display() const { cout << str; }
  String operator+=(String s) {
    if (strlen(str) + strlen(s.str) < SZ) {
      strcat(str, s.str);
    } else {
      cout << "\nПереполнение!";
      exit(1);
    }
    return String(str);
  }
};

int main() {
  String s1 = "С Рождеством! ";
  String s2 = "С Новым годом! ";
  String s3;

  s1.display();
  cout << endl;
  s2.display();
  cout << endl << endl;

  s1 += s2;

  s1.display();
  cout << endl;
  s2.display();
  cout << endl << endl;

  s3 = s1 += s2;

  s1.display();
  cout << endl;
  s2.display();
  cout << endl;
  s3.display();
  cout << endl;

  return 0;
}
