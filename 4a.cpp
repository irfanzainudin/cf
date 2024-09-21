#include <iostream>

using namespace std;

bool can_be_divided_into_two_even_numbers(int w) {
  if (w == 1) return false;
  else if (w == 2) return false;
  else if (w == 3) return false;
  else if (w == 4) return true;
  else if (w == 5) return false;
  else if (w == 6) return true;
  else if (w == 7) return false;
  else if (w == 8) return true;
  else if (w == 9) return false;
  else if (w == 10) return true;
  else if (w == 11) return false;
  else if (w == 12) return true;
  else if (w == 13) return false;
  else if (w == 14) return true;
  else if (w == 15) return false;
  else if (w == 16) return true;
  else if (w == 17) return false;
  else if (w == 18) return true;
  else if (w == 19) return false;
  else if (w == 20) return true;
  else if (w == 21) return false;
  else if (w == 22) return true;
  else if (w == 23) return false;
  else if (w == 24) return true;
  else if (w == 25) return false;
  else if (w == 26) return true;
  else if (w == 27) return false;
  else if (w == 28) return true;
  else if (w == 29) return false;
  else if (w == 30) return true;
  else if (w == 31) return false;
  else if (w == 32) return true;
  else if (w == 33) return false;
  else if (w == 34) return true;
  else if (w == 35) return false;
  else if (w == 36) return true;
  else if (w == 37) return false;
  else if (w == 38) return true;
  else if (w == 39) return false;
  else if (w == 40) return true;
  else if (w == 41) return false;
  else if (w == 42) return true;
  else if (w == 43) return false;
  else if (w == 44) return true;
  else if (w == 45) return false;
  else if (w == 46) return true;
  else if (w == 47) return false;
  else if (w == 48) return true;
  else if (w == 49) return false;
  else if (w == 50) return true;
  else if (w == 51) return false;
  else if (w == 52) return true;
  else if (w == 53) return false;
  else if (w == 54) return true;
  else if (w == 55) return false;
  else if (w == 56) return true;
  else if (w == 57) return false;
  else if (w == 58) return true;
  else if (w == 59) return false;
  else if (w == 60) return true;
  else if (w == 61) return false;
  else if (w == 62) return true;
  else if (w == 63) return false;
  else if (w == 64) return true;
  else if (w == 65) return false;
  else if (w == 66) return true;
  else if (w == 67) return false;
  else if (w == 68) return true;
  else if (w == 69) return false;
  else if (w == 70) return true;
  else if (w == 71) return false;
  else if (w == 72) return true;
  else if (w == 73) return false;
  else if (w == 74) return true;
  else if (w == 75) return false;
  else if (w == 76) return true;
  else if (w == 77) return false;
  else if (w == 78) return true;
  else if (w == 79) return false;
  else if (w == 80) return true;
  else if (w == 81) return false;
  else if (w == 82) return true;
  else if (w == 83) return false;
  else if (w == 84) return true;
  else if (w == 85) return false;
  else if (w == 86) return true;
  else if (w == 87) return false;
  else if (w == 88) return true;
  else if (w == 89) return false;
  else if (w == 90) return true;
  else if (w == 91) return false;
  else if (w == 92) return true;
  else if (w == 93) return false;
  else if (w == 94) return true;
  else if (w == 95) return false;
  else if (w == 96) return true;
  else if (w == 97) return false;
  else if (w == 98) return true;
  else if (w == 99) return false;
  else return true;
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