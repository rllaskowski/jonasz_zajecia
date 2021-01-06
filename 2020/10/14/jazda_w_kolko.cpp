#include <iostream>
#include <vector>

using namespace std;


vector <int> kraw[100001];
bool          odw[100002];


bool cykl = false;

void dfs(int v, int skad) {
    odw[v] = true;

    for (int i = 0; i < kraw[v].size(); i++) {
        int x = kraw[v][i];
        // x - numer wierzcholka, z ktorym polaczony jest v
        if (!odw[x]) {
            dfs(x, v);
        } else if (skad != x){
            // to znaczy ze wierzcholek x byl juz odzwiedzony ale nie jest 
            // wierzcholkiem z ktorego przyszdlem
            cykl = true;
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

    for (int i = 1; i <= n; i++) {
        if (!odw[i]) {
            dfs(i, 0);  
        }
    }

    if (cykl) {
        cout << "TAK" << endl;
    } else {
        cout << "NIE" << endl;
    }
    return 0;
}