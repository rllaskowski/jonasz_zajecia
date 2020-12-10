#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;


int main() {
    map<string, int> slownik;

    slownik["jeden"] = 1;
    slownik["dwa"] = 2;
    slownik["trzy"] = 3;
    slownik["cztery"] = 4;
    slownik["piec"] = 5;
    slownik["szesc"] = 6;
    slownik["siedem"] = 7;
    slownik["osiem"] = 8;
    slownik["dziewiec"] = 9;
    slownik["dziesiec"] = 10;
    slownik["jedenascie"] = 11;
    slownik["dwanascie"] = 12;
    slownik["trzynascie"] = 13;
    slownik["czternascie"] = 14;
    slownik["pietnascie"] = 15;
    slownik["szesnascie"] = 16;
    slownik["siedemnascie"] = 17;
    slownik["osiemnascie"] = 18;
    slownik["dziewietnascie"] = 19;
    slownik["dwadziescia"] = 20;
    slownik["tzydziesci"] = 30;
    slownik["czterdziesci"] = 40;
    slownik["piecdziesiat"] = 50;
    slownik["szescdziesiat"] = 60;
    slownik["siedemdziesiat"] = 70;
    slownik["osiemdziesiat"] = 80;
    slownik["dziewiecdziesiat"] = 90;
    slownik["sto"] = 100;
    slownik["dwiescie"] = 200;
    slownik["trzysta"] = 300;
    slownik["czterysta"] = 400;
    slownik["piecset"] = 500;
    slownik["szescset"] = 600;
    slownik["siedemset"] = 700;
    slownik["osiemset"] = 800;
    slownik["dziewiecset"] = 900;
    slownik["tysiac"] = 1000;
    slownik["tysiace"] = 1000;
    slownik["tysiecy"] = 1000;
    slownik["milion"] = 1000000;
    slownik["miliony"] = 1000000;
    slownik["milionow"] = 1000000;
    slownik["miliard"] = 1000000000;
    slownik["miliardy"] = 1000000000;
    slownik["miliardow"] = 1000000000;
    string slowo;
    int podsuma = 0;
    int suma = 0;

    while(getline(cin, slowo, ' ')) { 
        if (slowo[slowo.size()-1] == '\n') {
            slowo.erase(slowo.size()-1, 1);
        }
        
        if (slownik[slowo] == 0) {
            cout << "NIE";
            return 0;
        }

        if (slownik[slowo] >= 1000){
            podsuma *= slownik[slowo];
            suma += podsuma;
            podsuma = 0;
        } else {
            podsuma += slownik[slowo];
        }
    } 
    suma += podsuma;


    cout << suma;
    return 0;
}