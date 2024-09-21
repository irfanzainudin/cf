#include <iostream>

using namespace std;

int main() {
  int w;
  cin >> w;
  while (w < 1 || w > 100) {
    printf("Input must be between 1 and 100. Try again: ");
    cin >> w;
  }

  string output;
  for (int i = 0; i < w; i++) {
    string in;
    cin >> in;
    if (in.length() > 10) {
        output += in[0] + to_string(in.length() - 2) + in[in.length() - 1] + '\n';
    } else {
        output += in + '\n';
    }
  }
  cout << output;
}