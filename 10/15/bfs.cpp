#include <iostream>
#include <vector>
#include <queue>

using namespace std;


vector <int> kraw[1000001];
int           odl[1000002];
int n, m;

void bfs(int s) {
    // s jest wierzchokiem startowym
    for (int i = 1; i <= n; i++){
        odl[i] = -1; //super life hack!!!!!!!!!!11
    }
    odl[s] = 0;

    queue <int> kolejka;
    kolejka.push(s);

    int x;

    while(kolejka.size() > 0) {
        x = kolejka.front();
        kolejka.pop();
        // znamy odleglosc do wierzcholka x
        // chcemy ustawic odl wierzcholkom polaczonym z x
        for (int i = 0; i < kraw[x].size(); i++) {
            int v = kraw[x][i];
            // istnieje krawedz pomiedzy x oraz v
            if (odl[v] == -1) {
                //ustawiamy odleglosc do v
                odl[v] = odl[x]+1;
                kolejka.push(v);
            }
        }
    }
}


int main() {
    int a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        
        kraw[a].push_back(b);
        kraw[b].push_back(a);
    }

    bfs(0);

    int suma = 0;

    for (int i = 1; i <= n; i++) {
        suma += odl[i];
    }
    cout << suma*2;

    return 0;
}