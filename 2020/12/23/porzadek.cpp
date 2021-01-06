#include <iostream>

using namespace std;

int main() {
    int n;
    string rosliny;
    int t;
    int a, b;

    cin >> n;
    cin >> rosliny;
    cin >> t;

    int rud = 0;
    int wspolczynnik = 0;

    for (int i = 0; i < t; i++) {
        cin >> a >> b;

        for (int j = a; j <= b; j++) {
            if (rosliny[j-1] == 'R') {
                rud++;
            } else {
                wspolczynnik += rud;
            }
        }
        cout << wspolczynnik << endl;
        rud = 0;
        wspolczynnik = 0;
    }

    return 0;
}