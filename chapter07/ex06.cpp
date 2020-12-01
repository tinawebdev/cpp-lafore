#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};
// от 2 до 10 обычные числа
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card {
  private:
    int number;
    Suit suit;
  public:
    card() {}
    void set(int n, Suit s) {number = n; suit = s;}
    void display();
};

void card::display() {
  if (number >= 2 && number <= 10)
    cout << number;
  else {
    switch(number) {
      case jack:  cout << 'J'; break;
      case queen: cout << 'Q'; break;
      case king:  cout << 'K'; break;
      case ace:   cout << 'A'; break;
    }
  }
  switch(suit) {
    case clubs:    cout << "♣"; break; // static_cast<char>(5)
    case diamonds: cout << "♦"; break; // static_cast<char>(4)
    case hearts:   cout << "♥"; break; // static_cast<char>(3)
    case spades:   cout << "♠"; break; // static_cast<char>(6)
  }
}

int main() {
  card deck[52];
  int j;

  cout << endl;
  for (j = 0; j < 52; j++) {
    int num = (j % 13) + 2;
    Suit su = Suit(j / 13);
    deck[j].set(num, su);
  }

  cout << "Исходная колода:\n";
  for (j = 0; j < 52; j++) {
    deck[j].display();
    // начинаем новую строку после каждой 13-й карты
    if (!((j + 1) % 13))
      cout << endl;
    else
      cout << " ";
  }
  // инициализируем генератор случайных чисел
  srand(time(NULL));
  for (j = 0; j < 52; j++) {
    // выбираем случайную карту
    int k = rand() % 52;
    // и меняем ее с текущей
    card temp = deck[j];
    deck[j] = deck[k];
    deck[k] = temp;
  }

  cout << "\nПеремешанная колода:\n";
  for (j = 0; j < 52; j++) {
    deck[j].display();
    // начинаем новую строку после каждой 13-й карты
    if (!((j + 1) % 13))
      cout << endl;
    else
      cout << " ";
  }

  card hands[4][13];
  int i;
  int n = 0;
  for (j = 0; j < 13; j++) {
    for (i = 0; i < 4; i++) {
      hands[i][j] = deck[n++];
    }
  }
  for (i = 0; i < 4; i++) {
    cout << "\nГруппа карт " << i + 1 << "-го игрока:\n";
    for (j = 0; j < 13; j++) {
      hands[i][j].display();
      if (j + 1 < 13)
        cout << ' ';
      else 
        cout << endl;
    }
  }

  cout << endl;
  return 0;
}
