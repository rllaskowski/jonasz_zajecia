#include<iostream>
using namespace std;

int nwd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }

    while (b > 0) {  
        a %= b;
        swap(a, b);          
    }
    return a;
}

int nww(int a, int b) {
    return a*b/nwd(a, b);
}

int main() {
    int l1;
    int m1;
    int l2;
    int m2;
    int m3;
    int m4;
    int nm;
    int nl;
    int nm2;
    int nl2;
    int wynik = 0;

    cin >> l1 >> m1;
    cin >> l2 >> m2;

    m3 = nww(m1, m2);
    m4 = nww(m1, m2);
    /*l1 = m3 / m1;
    l2 = m3 / m2;*/

    cout << m3 << endl;
    cout << m4 << endl;

    nl = l1 + l2;
    nm = m4;

    cout << nl << endl;
    cout << nm << endl;

    nl2 = nl;
    nm2 = nm;

    nl2 /= nwd(nl, nm);
    nm2 /= nwd(nl, nm);

    wynik = nl2 / nm2;
    nl2 /= nm2;
    
    if (wynik > 0) {
        cout << wynik << " " << nl2 << "/" << nm2;
    } else {
        cout << nl2 << "/" << nm2;
    }


    return 0;
}