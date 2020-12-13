#include <iostream>
using namespace std;

class times {
  private:
    int hours;
    int minutes;
    int seconds;
  public:
    times() : hours(0), minutes(0), seconds(0) {
    }
    times(int hrs, int min, int sec):hours(hrs), minutes(min), seconds(sec) {
    }
    void displayTime() const {
      cout << hours << ":" << minutes << ":" << seconds;
    }
    void addTimes(times, times);
    times operator+ (times) const;
};

void times::addTimes(times t1, times t2) {
  seconds = t1.seconds + t2.seconds;
  if(seconds > 59) {
    seconds -= 60;
    minutes++;
  }

  minutes += t1.minutes + t2. minutes;
  if(minutes > 59) {
    minutes -= 60;
    hours++;
  }

  hours += t1.hours + t2.hours;
}

times times::operator+(times t2) const {
  int s = seconds + t2.seconds;
  int m = minutes + t2.minutes;
  int h = hours + t2.hours;

  if(s > 59) {
    s -= 60;
    m++;
  }

  if(m > 59) {
    m -= 60;
    h++;
  }

  return times(h, m, s);
}

int main() {
  const times t1(12, 35, 59);
  const times t2(1, 10, 15);
  times t3, t4;

  t3.addTimes(t1, t2);
  cout <<"Время t3 = ";
  t3.displayTime();
  cout << endl;
  
  t4 = t1 + t2;
  cout <<"Время t4 = ";
  t4.displayTime();
  cout << endl;

  return 0;
}
