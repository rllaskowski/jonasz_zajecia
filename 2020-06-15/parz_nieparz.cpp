#include <iostream>

using namespace std;

int main() {
  int liczba;
  
  for (int i = 0; i < 12; i += 1) {
    cin >> liczba;
    if (liczba % 2 == 0){
      cout << "parzysta" << endl;
  
    } else {
        cout << "nieparzysta" << endl; 
    }
  }

  return 0;
}
