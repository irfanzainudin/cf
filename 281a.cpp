#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  if (!isupper(s[0])) {
    cout << (char) toupper(s[0]) << s.substr(1) << '\n';
  } else {
    cout << s << '\n';
  }
}