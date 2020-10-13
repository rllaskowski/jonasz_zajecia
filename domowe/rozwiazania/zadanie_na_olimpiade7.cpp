#include <iostream>
using namespace std;

int main() {
int ile = 0;
    for (int liczba = 1; liczba <= 160; liczba++) {
      if (liczba % 2 == 0)
        ile++;
      else if (liczba % 3 == 0)
        ile++;
      else if (liczba % 5 == 0)
        ile++;
    }
    cout << ile << "\n";
}