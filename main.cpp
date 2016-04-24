#include <iostream>

using namespace std;

extern "C" {
int baz(int b);
}

int main () {
  cout << baz(0) << endl;
  return 0;
}
