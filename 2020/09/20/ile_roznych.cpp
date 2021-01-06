#include <iostream>
#include <set>

using namespace std;

/*
1 5, 4, 1, 4

{1, 4, 5}

set<int>
zbior.count()
zbior.size()
zbior.insert()
*/
int main() {
    set<int> zbior;
    int n;
    int x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        zbior.insert(x);
    }
    cout << zbior.size();

    return 0;
}