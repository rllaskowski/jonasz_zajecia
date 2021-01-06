#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    const int n = 3;
    
    int tab[n];

    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    sort(tab, tab+n);


   
    int j = 0;
    while (tab[j] == 0) {
        j++;
    } 
    swap(tab[0],tab[j]);

    for (int i = 0; i < n; i++) {
        cout << tab[i];
    }

    return 0;
}