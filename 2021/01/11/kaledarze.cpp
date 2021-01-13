#include <iostream>

using namespace std;

int A[1000001]; //ile dni w kazdym miesiacu
int B[1000001];
int ilePA[1000001]; //ile dni przed danym miesiacem
int ilePB[1000001];


int wyszukaj(int ktoryDzien, int pref[], int ileMiesiecy) {
    /*
    pref[m] to ilosc dni przed miesiacem m
    */
    
    int pocz = 1;
    int kon = ileMiesiecy;
    int s;



    while (kon >= pocz) {
        s = (pocz+kon) / 2;

        // s to numer jakiegos miesiaca
        // teraz chcemy sprawdzic czy ten miesiac
        // jest za wczesnie
        // za pozno
        // czy moze to dobry miesiac
        if (pref[s] < ktoryDzien && pref[s+1] >= ktoryDzien) {
            return s;
        } else if (pref[s] < ktoryDzien) {
            pocz = s+1;
        } else {
            kon = s-1;
        }
    }

}


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

    ilePA[n+1] = ilePA[n] + A[n];
    ilePB[m+1] = ilePB[m] + B[m];

    cin >> z;

    for (int i = 0; i < z; i++) {
        cin >> D >> M >> C;

        int dni = 0;
        int ileDni = D; // ktory dzien w roku
        int *kal = A; // tablica
        int *kal2 = B;
        int M2;
        if (C == 'B') {
           swap(kal, kal2);
        }

        if (C == 'A') {
            ileDni += ilePA[M];
        } else {
            ileDni += ilePB[M];
        }

        
        if (C == 'A') {
            M2 = wyszukaj(ileDni, ilePB, m);
            dni = ileDni - ilePB[M2];
        } else {
            M2 = wyszukaj(ileDni, ilePA, n);
            dni = ileDni - ilePA[M2];
        }
       
       
       
        /*while (dni + kal2[M2] < ileDni) {
            dni += kal2[M2];
            M2++;
        }*/
       
        cout << dni << " " << M2 << endl;
    }

    

    return 0;
}