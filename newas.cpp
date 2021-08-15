#include<iostream>
#include<unistd.h>
#include<iomanip>

void countdown(int, int, int);
using namespace std;
int main() {
	system("Color 0b");
  int h, m, s;
  cout << "* Enter stopwatch time in HH MM SS format: (e.g: 00 01 10 - 1 minute 10 seconds) *\n HH MM SS = ";
  cin >> h >> m >> s;
  countdown(h, m, s);
  while (m > 0) {
    system("cls");
    m--;
    s = 59;
    countdown(h, m, s);
  }
  while (h > 0) {
    system("cls");
    h--;
    m = 59;
    s = 59;
    countdown(h, m, s);
    while (m > 0) {
      m--;
      s = 59;
      countdown(h, m, s);
    }
  }
  cout << " Time up!\a";
  return 0;
}
void countdown(int h, int m, int s) {
  while (s >= 0) {
    system("cls");
	cout<<"your time will be finished in .............."<<endl;
    cout << setfill('0') << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << s;
    sleep(1);
    s--;
  }
}