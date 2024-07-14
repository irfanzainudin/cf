#include <iostream>
// Catch2's files are not committed
#include <catch2/catch_test_macros.hpp>

using namespace std;

int main() {
  int w;
  cin >> w;
  // cout << w << '\n';
  if ((w-2) % 2 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

unsigned int watermelon( unsigned int number ) {
  int w;
  cin >> w;
  // cout << w << '\n';
  if ((w-2) % 2 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

TEST_CASE( "watermelons are computed", "[watermelon]" ) {
    REQUIRE( watermelon(1) == 1 );
    REQUIRE( watermelon(2) == 2 );
    REQUIRE( watermelon(3) == 6 );
    REQUIRE( watermelon(10) == 3628800 );
}