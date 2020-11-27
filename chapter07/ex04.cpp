// Программа позволяет пользователю вводить целые числа, сохраняет их в
// массиве, а затем выводит наибольший элемент и его индекс.
#include <iostream>
using namespace std;
const int MAX = 5;

int maxint(int arr[], int size);

int main() {
  int arr[MAX] = {0};
  int count = 0;
  do {
      cout << "Введите число: ";
      cin >> arr[count++];
  } while (count < MAX);
  int maxElem = maxint(arr, count);
  cout << "\nМаксимальный элемент: " << arr[maxElem] << " [" << maxElem << "]";
  cout << endl;
  return 0;
}

int maxint(int arr[], int size) {
  int max = arr[0];
  int idx = 0;
  for (int i=1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
      idx = i;
    }
  }
  return idx;
}
