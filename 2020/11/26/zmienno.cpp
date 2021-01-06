#include <iostream>
using namespace std;

int jednoLit[30];
long long dwuLit[30];

int jednoLit2[30];
int dwuLit2[30];
int trzyLit2[30];

int main() {
    string slowo;
    int suma1 = 0;
    long long suma2 = 0;
    long long suma3 = 0;
    cin >> slowo;

    for (int i = 0; i < slowo.size(); i++) {
        jednoLit[slowo[i]-'a']++;
        suma1++;
        dwuLit[slowo[i]-'a'] += suma1 - jednoLit[slowo[i]-'a'];
        suma2 += suma1 - jednoLit[slowo[i]-'a'];
        suma3 += suma2 - dwuLit[slowo[i]-'a'];
    } 
    
    cout << suma3 << " ";

    suma1 = 0;
    suma2 = 0;
    suma3 = 0;

    for (int i = 0; i < slowo.size(); i++) {
        suma1 += 1 - jednoLit2[slowo[i]-'a'];
        jednoLit2[slowo[i]-'a'] = 1;
        suma2 += suma1 - jednoLit2[slowo[i]-'a'] - dwuLit2[slowo[i]-'a'];
        dwuLit2[slowo[i]-'a'] = suma1 - jednoLit2[slowo[i]-'a'];
        suma3 += suma2 - dwuLit2[slowo[i]-'a'] - trzyLit2[slowo[i]-'a'];
        trzyLit2[slowo[i]-'a'] = suma2 - dwuLit2[slowo[i]-'a'];
    }

    cout << suma3;

    return 0;
}