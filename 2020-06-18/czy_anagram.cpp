#include<iostream>

using namespace std;

bool czyAnagram(string slowo1, string slowo2) {
     /*
        Dwa słowa są anagramami jeśli można ułożyć jedno z drugiego
        poprzez zamianę liter miejscami - każda litera występuje w 
        obu słowach taką samą ilość razy.

        literki1, literki2 - tablice zliczające ilość występowań
        małych liter alfabetu ang.

        Przykład:
        literki1[0] - ilość występowań 'a' w slowo1
        literki2[5] - ilość występowań 'f' w slowo2
    */
    int literki1[30];
    int literki2[30];
    char litera;

    for (int i = 0; i < 30; i++) {
        literki1[i] = 0;
        literki2[i] = 0;
    }
   
    for (int i = 0; i < slowo1.size(); i++) {                    
        litera = slowo1[i];
        literki1[litera-'a']++;
    }

    for (int i = 0; i < slowo2.size(); i++) {                    
        litera = slowo2[i];
        literki2[litera-'a']++;
    }

    for (int i = 0; i < 30; i++) {
        if (literki1[i] != literki2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string slowo1, slowo2;

    cin >> slowo1 >> slowo2;

    if (czyAnagram(slowo1, slowo2) == false) {
        cout << "NIE";
    } else {
        cout << "TAK";
    }

    return 0;
}
