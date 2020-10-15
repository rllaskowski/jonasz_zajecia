#include <iostream>
#include <vector>

using namespace std;

/*

Dla danego graffu nieskierowanego stwierdz czy jest on spojny

Dane wejsciowe:
n - ilosc wierzcholokw
m - ilosc krawedzi
n m

m wierszy postaci a b 
n,m <= 1000000

5 6

1 2
2 3
3 4
4 1
1 5
2 5

*/


vector<int> kraw[1000001];
bool         odw[1000002];


void dfs(int v) {
    // jestesmy w wierzcholku v
    // zaznaczmy ze zostal on odwiedzony
    odw[v] = true;
    
   // cout << "Jestem w wierzcholku " << v << endl; 
    for (int i = 0; i < kraw[v].size(); i++) {
        int x = kraw[v][i];
        //cout << v << " jest polaczony z " << x << endl;
        if (odw[x] == false) {
            //cout << x << " nie jest odwiedzony wiec do niego ide" << endl;
            dfs(x);
        }
    }
    //cout << "Wychodze z wierzcholka " << v << endl;
}

int main() {
    int n;
    int m;
    int a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        kraw[a].push_back(b);
        kraw[b].push_back(a);
    }

    dfs(1);

    for (int i = 1; i <= n; i++) {
        if (odw[i] != true) {
            cout << "NIEEEEEEE!!!!!!!!111";
            return 0;
        }
    } 
    cout << "tak";

    return 0;
}









