#include <iostream>

using namespace std;


bool czyMogeWydac[101][101];

int main() {
    int n, maxKwota;
    cin >> n >> maxKwota;

    int a;

    // za pomoca zerowej ilosci monet mozemy wydac kwote 0
    czyMogeWydac[0][0] = true;

    for (int i = 1; i <= n; i++) {
        // dostejmy nowa monenete o nominale a
        cin >> a;

        // za pomoca nowej monety chcemy uaktualnic 
        // wiersz oznaczajacy ze mamy teraz dostepne i monet
        // przechodzimy po wszystkich interesujacych nas kwotach do wydania

        for (int k = 0; k <= maxKwota; k++) {
            // czy korzystajac z mniejszej ilosci monet
            // moglem wydac kwote k?

            if (czyMogeWydac[i-1][k]) {
                // skoro moge wydac za pomoca mniejszej ilosci monet
                // to nowa moneta nawet nie jest mi potrebna - dalej moge wydac te kwote
                czyMogeWydac[i][k] = true;
            } else {
                // wczesniej nie moglem wydac tej kwoty
                // zobaczmy czy moglem wydac kwote k-a
                // jesli moglem wydac kwkote k-a to moge wydac kwote
                // (k-a)+a = k korzystajac z nowej monety o nominale a
                if (czyMogeWydac[i-1][k-a]) {
                    czyMogeWydac[i-1][k] = true;
                }
            }
        } 
    }

    
    return 0;
}