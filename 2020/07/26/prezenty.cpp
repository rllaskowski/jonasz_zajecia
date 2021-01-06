#include <iostream>
#include <queue>

using namespace std;


/*
fundusze: 14
ceny:  13


kupione = 2
*/

int main() {
  int n;
  int m;
  priority_queue<int> fundusze;
  priority_queue<int> ceny;
  int x;
  cin >> n >> m;
    
  for (int i = 0; i < n; i++) {
    cin >> x;
    fundusze.push(x);
  }
  
  for (int i = 0; i < m; i++) {
    cin >> x;
    ceny.push(x);
  }
  
  int kupione = 0;
  
  while (fundusze.empty() == false && ceny.empty() == false) {
    // osoba ktora ma dokladnie fundusze.top() pieniedzy
    // chce cos kupic. 
    while (ceny.empty() == false && ceny.top() > fundusze.top()) {
      ceny.pop();
    }
    
    if (ceny.empty() == false) {
      kupione++;
      fundusze.pop();
      ceny.pop();
    }
  }
  
  cout << kupione << endl;
  
  return 0;
}
