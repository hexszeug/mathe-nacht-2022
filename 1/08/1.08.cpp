#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int a = 1; a < 1000000; a++) {
        if (pow(a, 3) == a*a*6) {
            cout << a << endl;
        }
    }
    cout << endl;
    for (int r = 1; r < 1000; r++) {
        if (4.0 * r*r == 4.0/3.0 * pow(r, 3)) {
            cout << r << endl;
        }
    }
    cout << endl;
    for (int r = 1; r < 1000; r++) {
        for (int h = 1; h < 1000; h++) {
            if (r*r*h == 2*r*r + 2*r*h) {
                cout << r << ";" << h << endl;
            }
        }
    }
    cout << endl;
    for (int r = 1; r < 1000; r++) {
        for (int h = 1; h < 1000; h++) {
            if (1.0/3.0*r*r*h == r*r+r*sqrt(r*r+h*h)) {
                cout << r << ";" << h << endl;
            }
        }
    }
    return 0;
}