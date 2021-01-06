#include <iostream>

using namespace std;

typedef pair<int,int> Punkt;

Punkt kapusty[1001];
bool bylismy [1001];
int n, s;

bool czySkoczyc(Punkt p1, Punkt p2, int s){
    int a = abs(p1.first-p2.first);
    int b = abs(p1.second-p2.second);
    int c2 = a*a+b*b;

    return c2 <= s*s;
}

int dfs(int poz) {
    bylismy[poz] = true;
    int licznik = 0;
    for (int i = 0; i < n; i++) {
        if (!bylismy[i] && czySkoczyc(kapusty[poz],kapusty[i] , s)) {
            licznik += dfs(i);
        }
    }
    return licznik+1;
}

int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> kapusty[i].first >> kapusty[i].second;
    }

    cout << dfs(0);


    return 0;
}