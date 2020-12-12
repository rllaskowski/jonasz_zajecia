#include <iostream>
using namespace std;

int nwd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    
    while (b > 0) {
        a %= b; 

        swap(a, b);
    }
    return a;
}

typedef struct punkt {
    int x;
    int y;
} Punkt;

void wypiszKratowe(Punkt a, Punkt b) {
    int rx = abs(a.x - b.x);
    int ry = abs(a.y - b.y);
    int k = nwd(rx, ry);

    int c;
    int d;

    for (int i = 1; i < k; i++) {
        c = rx/k * i;
        d = ry/k * i;
        if (a.x > b.x) {
            cout << a.x-c << " ";
        } else {
            cout << a.x+c << " ";
        }
        
        if (a.y > b.y) {
            cout << a.y-d << endl;
        } else {
            cout << a.y+d << endl;
        }
    }
}


int main() {
    int n;
    Punkt a;
    Punkt b;
    Punkt c;
    cin >> n;
    cin >> b.x >> b.y;
    c = b;
    cout << b.x << " "<< b.y << endl;
    for (int i = 1; i < n; i++) {
        cin >> a.x >> a.y;
        wypiszKratowe(a, b);
        b = a;
        cout << a.x << " "<< a.y << endl;
    }

    wypiszKratowe(b, c);
    
    return 0;
}