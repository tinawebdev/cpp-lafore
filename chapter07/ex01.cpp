// Программа принимает строку от пользователя, вызывает функцию переворачивающую
// строку, а затем выводит полученный результат.

#include <iostream>
#include <cstring>

using namespace std;

void reversit(char str[]);

const int MAX = 80;

int main() {
  char str[MAX]={'\0'};
  cout << "Введите строку: ";
  cin.get(str, MAX);
  reversit(str);
  cout << "\nПеревернутая строка: " << str << endl;

  return 0;
}

void reversit(char str[]) {
  int len = strlen(str);
  for (int i=0; i < len/2; i++) {
    char temp = str[i];
    str[i] = str[len-i-1];
    str[len-i-1] = temp;
  }
}
