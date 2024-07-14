#include <iostream>

using namespace std;

bool can_be_divided_into_two_even_numbers(int w) {
  // for (int i = 0; i < w; i++) {
  //   if (i % 2 == 0) {}
  // }
  if ((w-2) % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int w;
  cin >> w;
  while (w < 1 || w > 100) {
    printf("Input must be between 1 and 100. Try again: ");
    cin >> w;
  }
  // cout << w << '\n';
  bool verdict = can_be_divided_into_two_even_numbers(w);

  if (verdict) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}