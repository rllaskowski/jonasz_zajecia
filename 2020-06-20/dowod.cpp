#include<iostream>
using namespace std;

/*
123111214531

*/

int main() {
  int n;
  string dokumenty;
  cin >> n;
  cin >> dokumenty;
  int k = n-1;
  
  while ((dokumenty[k]-'0') % 2 == 1) {
    k--;
  }
  
  for (int i = 0; i <= k; i++) {
    cout << dokumenty[i];
  }
  
  return 0;
}