#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
  int l, b;
  cin >> l >> b;
  
  int years = 0;
  while (l <= b) {
    l = l * 3;
    b = b * 2;
    years++;
  }

  cout << years << '\n';
}