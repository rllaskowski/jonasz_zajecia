#include <iostream>

using namespace std;

int min(int a, int b) {
    if (a > b) {
        return b;
    } else {
        return a;
    }
}

int nwd(int a, int b) {
  for (int i = min(a, b); i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
      return i;
    }
  }
}

int main() {
  int minuty;
  int najwDziel;

  cin >> minuty;
  
  najwDziel = nwd(minuty, 24 * 60);
  cout << minuty / najwDziel << "/" << (24 * 60) / najwDziel;

  return 0;
}
