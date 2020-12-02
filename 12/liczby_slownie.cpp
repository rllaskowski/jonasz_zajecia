#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    map<string, int> mapa;
    mapa["milon"] = 1000000;
    mapa["siedemnascie"] = 17;

    cout << mapa["Jonasz"];
    string slowo;
    vector<string> slowa; 
      
    while(getline(cin, slowo, ' ')) { 
        slowa.push_back(slowo); 
    } 
      
    for(int i = 0; i < slowa.size(); i++) 
        cout << slowa[i] << '\n'; 
    return 0;
}