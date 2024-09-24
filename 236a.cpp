#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  string w;
  cin >> w;
  while (w.length() < 1 || w.length() > 100) {
    printf("Input must be between 1 and 100. Try again: ");
    cin >> w;
  }

  map<char, int> m;
  for (int i = 0; i < w.length(); i++) {
    if (m.find(w[i]) == m.end()) {
        m[w[i]] = 0;
    } else {
        m[w[i]] = m[w[i]]++;
    }
  }
  if (m.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << '\n';
  } else {
    cout << "IGNORE HIM!" << '\n';
  }
}