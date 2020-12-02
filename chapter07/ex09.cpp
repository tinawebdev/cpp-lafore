#include <iostream>
using namespace std;

class queue {
  private:
    static const int MAX = 10;
    int q[MAX];
    int head;
    int tail;
    int length;
  public:
    queue() {
      head = 0;
      tail = -1;
      length = 0;
    }
    void put(int var);
    int get();
};

void queue::put(int var) {
  if (length == MAX) {
    cout << "Очередь не может содержать больше " << MAX << " элементов!";
    exit(1);
  }

  if (tail == MAX - 1)
    tail = -1;

  q[++tail] = var;
  length++;
}

int queue::get() {
  if (length == 0) {
    cout << "Очередь пуста!";
    exit(1);
  }

  int var = q[head++];
  length--;

  if (head == MAX)
    head = 0;

  return var;
}

int main() {
  queue q1;

  q1.put(1);
  q1.put(2);
  cout << "1: " << q1.get() << endl;
  cout << "2: " << q1.get() << endl;
  q1.put(3);
  q1.put(4);
  q1.put(5);
  q1.put(6);
  cout << "3: " << q1.get() << endl;
  cout << "4: " << q1.get() << endl;
  cout << "5: " << q1.get() << endl;
  cout << "6: " << q1.get() << endl;

  return 0;
}
