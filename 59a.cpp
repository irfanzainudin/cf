#include <iostream>

using namespace std;

int main() {
  string w;
  cin >> w;

  int smol = 0;
  int capi = 0;
  for (auto s : w) {
    if (islower(s)) {
        smol++;
    } else {
        capi++;
    }
  }

  if (smol == capi) {
    for (char c : w) {
        cout << (char) tolower(c);
    }
    cout << '\n';
  } else if (smol < capi) {
    for (char c : w) {
        cout << (char) toupper(c);
    }
    cout << '\n';
  } else {
    for (char c : w) {
        cout << (char) tolower(c);
    }
    cout << '\n';
  }
}