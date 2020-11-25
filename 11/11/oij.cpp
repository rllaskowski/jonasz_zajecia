#include<iostream>
using namespace std;


int main() {
    string slowo;
    int wynik = 0;
    bool czyO = false;
    bool czyI = false;

    cin >> slowo;

    for (int i = 0; i < slowo.size(); i++) {
        if (czyO == false && slowo[i] == 'o') {
            czyO = true;
        } else if (czyO == true && czyI == false && slowo[i] == 'i') {
            czyI = true;
        } else if (czyO == true && czyI == true && slowo[i] == 'j') {
            wynik++;
            czyO = false;
            czyI = false;
        }
    }


    if (wynik == 0) {
        cout << "NIE";
    } else {
        cout << wynik;
    }


    return 0;
}