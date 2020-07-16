#include <iostream>
using namespace std;

int dodaj(int a, int b) {
  return a + b;
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
   return b;
  }
}


int main() {
  int liczba1, liczba2;
  cin >> liczba1 >> liczba2;
  cout << dodaj(liczba1, liczba2) << endl; 
  cout << "najwieksza z tych liczb to: " << max(liczba1, liczba2) << endl;
  
  
  if (liczba1 > liczba2) {
    cout << liczba1 << " jest wieksze od " << liczba2 << endl;
  } else if (liczba1 == liczba2) {
    cout << " obie liczby sa rowne sobie";
  } else {
    cout << liczba2 << " jest wieksze od " << liczba1 << endl;
  }
  
  int n;
  
  cin >> n;
  
  int i = 1;
  while (i <= n) {
    cout << i << endl;
    i += 1;
  }
  
  
  for (int i = n; i >= 1; i -= 1) {
    cout << i << " ";
  }
 
  return 0; 
}