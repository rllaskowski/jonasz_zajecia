#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++)
        for (int j = i+1; j <= 5; j++)
            cout << "*";
}