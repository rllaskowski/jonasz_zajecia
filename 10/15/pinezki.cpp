#include <iostream>
#include <vector>
using namespace std;


/*
n=6 4

3 2
1 2
5 2
4 3

1: 2
2: 1 2 3
3: 
4:
5:
6:
*/

vector <int> sznurek[1000001];


int main() {
    int n, m;
    int a, b;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        sznurek[a].push_back(i+1);
        sznurek[b].push_back(i+1);
    }
    
    cout << endl << endl;
    for (int i = 1; i <= n; i++) {
        cout << sznurek[i].size() << " ";

        for (int j = 0; j < sznurek[i].size(); j++) {
            cout << sznurek[i][j] << " ";   
        }  
        cout << endl;
        
    }

    return 0;
}