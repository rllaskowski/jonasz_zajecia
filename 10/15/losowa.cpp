#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int losuj(int a, int b) {
    return a + rand() % (b-a+1);
}

int main() {
    srand(time(NULL));

    for (int i = 0 ; i < 10; i++) {
        cout << losuj(1, 100) << endl;
    }
    

    return 0;
}