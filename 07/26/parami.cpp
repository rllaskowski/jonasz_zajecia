#include <iostream>

using namespace std;

/*
1001111

ci¹gi zaczynajace siê cyfra 1
i konczace sie cyfra 0


4 3  1   = 8
101001011

podciagi = 8
zera = 4

*/
int main() {
  int n;
  string ciag;
  cin >> n;
  cin >> ciag;
  int zera = 0;
  int podciagi = 0;
  
  for (int i = n-1; i >= 0; i--) {
    if (ciag[i] == '0') {
      zera += 1;
    } else {
      podciagi += zera;
    }
  }
  cout << podciagi << endl;
  return 0;
}
