/* Algorytm przeszukiwania grafu w głąb(DFS) */

#include <iostream>
#include <vector>

using namespace std;

vector<int> kraw[1000001];  // Listy sąsiedztwa
bool        odw[1000002];   // Do zaznaczania odwiedzonych wierzchołków


void dfs(int v) {
    odw[v] = true;
    
    for (int i = 0; i < kraw[v].size(); i++) {
        int x = kraw[v][i]; // wierzchołek v jest połączony krawędzią z wierzchołkiem x
       
        if (!odw[x]) { // nie wchodzimy do odwiedzonych wierzchołków 
            dfs(x); // 
        }
    }
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

    return 0;
}









