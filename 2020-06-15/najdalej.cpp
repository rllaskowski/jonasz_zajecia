#include <iostream>

using namespace std;

int tab[30];

int main() {
  int l;
  int max = 0;

  cin >> l;
  
  for (int i = 0; i < l; i++) {
    cin >> tab[i];
    if (tab[i] > max) {
      max = tab[i]; 
    }
  }
  
  char gracz = 'a';
  
  for (int i = 0; i < l; i++) {
    if (tab[i] == max) {
      cout << gracz;
    }
    
    gracz++;
  }
  
  
  return 0;
}
