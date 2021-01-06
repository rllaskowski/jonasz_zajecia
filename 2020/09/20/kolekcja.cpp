#include <iostream>
#include <set>

using namespace std;

bool tab[1000000];


/*
zbior.insert()
zbior.count()
*/

int main() {
    set<int> zbior;
    int n;
    int x;
    int najm = 1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        zbior.insert(x);
        while (zbior.count(najm) > 0) {
            najm++;
        }
        cout << najm << endl;
    }

    return 0;
}