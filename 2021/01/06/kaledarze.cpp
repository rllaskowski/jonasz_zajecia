#include <iostream>

using namespace std;

int A[1000001]; //ile dni w kazdym miesiacu
int B[1000001];
int ilePA[1000001]; //ile dni przed danym miesiacem
int ilePB[1000001];

int main() {
    int n, m;
    int z;
    int D, M;
    char C;

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> A[i];
        ilePA[i] = ilePA[i-1] + A[i-1];
    }
    for (int i = 1; i <= m; i++) {
        cin >> B[i];
        ilePB[i] = ilePB[i-1] + B[i-1];
    }

    cin >> z;

    for (int i = 0; i < z; i++) {
        cin >> D >> M >> C;

        int dni = 0;
        int ileDni = D; // ktory dzien w roku
        int *kal = A; // tablica
        int *kal2 = B;
        int M2 = 1;
        if (C == 'B') {
           swap(kal, kal2);
        }

        if (C == 'A') {
            ileDni += ilePA[M];
        } else {
            ileDni += ilePB[M];
        }

        while (dni + kal2[M2] < ileDni) {
            dni += kal2[M2];
            M2++;
        }
       
        cout << ileDni - dni << " " << M2 << endl;
    }

    

    return 0;
}