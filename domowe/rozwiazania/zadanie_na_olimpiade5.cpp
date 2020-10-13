/*

ssssssss
sssssbss
sbbbbbbb
bbbbbbb#
#bbbbbbb
bbbbbbbs
ssbsssss
ssssssss



*/

#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    for (int i = 1; i <= 246; i++)
      suma += i % 10;
    cout << suma << "\n";
}
