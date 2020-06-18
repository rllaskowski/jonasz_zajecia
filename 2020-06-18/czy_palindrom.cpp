#include<iostream>
using namespace std;

bool czyPalindrom(string slowo) {
  /* 
    Słowo jest palindromem
    jeśli czytane od tyłu jest takie samo
    
    Przykład: "kajak", "abba"
  */

  for (int i = 0; i < slowo.size()/2; i++) {
    if (slowo[i] != slowo[slowo.size()-i-1]) {
      return false;
    }
  }

  return true;
}

int main() {
  string slowo;
  cin >> slowo;

  if (czyPalindrom(slowo) == false) {
    cout << "NIE";
  } else {
    cout << "TAK";
  }

  return 0;
}
