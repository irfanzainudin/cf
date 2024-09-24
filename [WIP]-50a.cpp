#include <iostream>

using namespace std;

int main() {
  int w;
  cin >> w;
  while (w < 1 || w > 150) {
    printf("Input must be between 1 and 150. Try again: ");
    cin >> w;
  }

  int x = 0;
  for (int i = 0; i < w; i++) {
    string in;
    cin >> in;
  }
  cout << x << '\n';
}