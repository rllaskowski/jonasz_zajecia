#include <iostream>
#include <vector>

using namespace std;


vector <int> kraw[100001];
bool          odw[100002];

/*
v

kraw[v]

v = 10

          0 1 2 3 
kraw[10]: 7 6 4 11 

*/

int spojna;
void dfs(int v) {
    odw[v] = true;
    spojna++;
    
    for (int i = 0; i < kraw[v].size(); i++) {
        int x = kraw[v][i];
        // x - numer wierzcholka, z ktorym polaczony jest v
        if (!odw[x]) {
            dfs(x);
        }
    }
}


int main() {
    int n, m;
    int a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        
        kraw[a].push_back(b);
        kraw[b].push_back(a);
    }

    int wynik = 0;

    for (int i = 1; i <= n; i++) {
        if (!odw[i]) {
            spojna = 0;
            dfs(i);
            
            if (spojna > wynik) {
                wynik = spojna;
            }
        }
    }

    cout << wynik << endl;
    return 0;
}