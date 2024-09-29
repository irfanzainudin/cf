#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  int fh;
  cin >> fh;

  int steps = 0;
  while (fh != 0) {
    if (fh - 5 >= 0) {
        fh -= 5;
    } else if (fh - 4 >= 0) {
        fh -= 4;
    } else if (fh - 3 >= 0) {
        fh -= 3;
    } else if (fh - 2 >= 0) {
        fh -= 2;
    } else {
        fh--;
    }
    steps++;
  }

  cout << steps << '\n';
}