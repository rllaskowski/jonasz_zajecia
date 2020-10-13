#include <iostream>
using namespace std;

int main() {
    int x = 7;
    if (x != 2) {
      if (x % 3 == 2) {
        cout << "tak";
        if (x % 5 == 2)
          cout << "owo";
      }
    }
}