#include<iostream>
using namespace std;


/*
Z systemu dziesiętnego na system dwojkowy:
Przykład:

55(1) -> 27(1) -> 13(1) -> 6(0) -> 3(1) -> 1(1) -> 0 koniec 
55(10) = 110111(2)


Z systemu dwójkowego/binarnego na system dziesiętny:

*/

string naBin(int liczba) {
  string binarny = "";
  while (liczba > 0) {
    if (liczba % 2 == 0) {
      binarny = "0"+binarny;
    } else {
      binarny = "1"+binarny;
    }
    liczba /= 2;
  }
  return binarny;
}


int naDzies(string bin) {
  int liczba = 0; 
  int potega = 1; // 1 = 2^0
  
  // bin.size() - długość podanego napisu
  for (int i = bin.size()-1; i >= 0; i--) {
    char cyfra = bin[i];
    if (cyfra == '1') {
      liczba += potega; 
    }
    potega *= 2; 
  }
  return liczba;
}

int main() {
  string polecenie;
  int dziesietny;
  string binarny;
  
  cin >> polecenie;
  if (polecenie == "binarny") {
    cin >> dziesietny;
    cout << naBin(dziesietny);
  } else if (polecenie == "dziesietny"){
    cin >> binarny;
    cout << naDzies(binarny);
  } else {
    cout << "SPADAJ";
  }
  return 0;
}
