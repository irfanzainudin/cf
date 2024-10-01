#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  string s1, s2;
  cin >> s1;
  cin >> s2;

  int i = 0;
  int verdict = 0;
  while (i < s1.length()) {
    if (tolower(s1[i]) == tolower(s2[i])) {
        verdict = 0;
    } else {
        if (s1[i] > s2[i]) {
            verdict = 1;
            break;
        } else {
            verdict = -1;
            break;
        }
    }
    i++;
  }

  cout << verdict << '\n';

//   string s3 = "";
//   for (auto c : s2) {
//     s3 += tolower(c);
//   }
  
//   if (s1 < s3) {
//     cout << -1 << '\n';
//   } else if (s1 > s3) {
//     cout << 1 << '\n';
//   } else {
//     cout << 0 << '\n';
//   }
}