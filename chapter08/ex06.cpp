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
    times(int hrs, int min, int sec) : hours(hrs), minutes(min), seconds(sec) {
    }
    times(long s) { seconds_to_time(s); }
    void displayTime() const { cout << hours << ":" << minutes << ":" << seconds; }
    long time_to_seconds() const { return (hours * 3600 + minutes * 60 + seconds); }
    void seconds_to_time(long s);
    void addTimes(times, times);
    times operator+(times) const;
    times operator-(times) const;
    times operator*(float) const;
    operator float() const;
    times operator++();
    times operator++(int);
    times operator--();
    times operator--(int);
};

void times::seconds_to_time(long s) {
  hours = s / 3600;
  minutes = (s % 3600) / 60;
  seconds = (s % 3600) % 60;
}

void times::addTimes(times t1, times t2) {
  long totalSeconds;
  totalSeconds = t1.time_to_seconds() + t2.time_to_seconds();
  return seconds_to_time(totalSeconds);
}

times times::operator+(times t2) const {
  long totalSeconds;
  totalSeconds = time_to_seconds() + t2.time_to_seconds();
  return times(totalSeconds);
}

times times::operator-(times t2) const {
  return times(time_to_seconds() - t2.time_to_seconds());
}

times times::operator*(float f) const {
  return times(time_to_seconds() * f);
}

times::operator float() const {
  return time_to_seconds();
}

times times::operator++() {
  long totalSeconds, ts;
  totalSeconds = time_to_seconds();
  ts = ++totalSeconds;
  seconds_to_time(totalSeconds);
  return times(ts);
}

times times::operator++(int) {
  long totalSeconds, ts;
  totalSeconds = time_to_seconds();
  ts = totalSeconds++;
  seconds_to_time(totalSeconds);
  return times(ts);
}

times times::operator--() {
  long totalSeconds, ts;
  totalSeconds = time_to_seconds();
  ts = --totalSeconds;
  seconds_to_time(totalSeconds);
  return times(ts);
}

times times::operator--(int) {
  long totalSeconds, ts;
  totalSeconds = time_to_seconds();
  ts = --totalSeconds;
  seconds_to_time(totalSeconds);
  return times(ts);
}

int main() {
  const times t1(12, 35, 59);
  const times t2(1, 10, 15);
  times t3, t4;

  t1.displayTime();
  cout << endl;
  t2.displayTime();
  cout << endl;

  t3 = t1 * 0.5f;
  cout << "t1 * 0.5f = ";
  t3.displayTime();
  cout << endl;

  t4 = 0.5f * t3;
  cout << "0.5f * t3 = ";
  t4.displayTime();
  cout << endl;

  return 0;
}
