#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

map<string, int> mapa;

void uzupelnij() {
    mapa["milon"] = 1000000;
    mapa["siedemnascie"] = 17;
}

int main() {
    uzupelnij();
    
    mapa["milion"] = 1000000;
    cout << mapa["milionów"];
    string slowo;
    vector<string> slowa; 
      
    while(getline(cin, slowo, ' ')) { 
        slowa.push_back(slowo); 
    } 
      
    for(int i = 0; i < slowa.size(); i++) 
        cout << slowa[i] << '\n'; 
    return 0;
}