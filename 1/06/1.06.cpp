#include <bits/stdc++.h>

using namespace std;

double logb(int n, int b) {
    return log(n) / log(b);
}

int main() {
    for (int n = 0; n < 500; n++) {
        double s = 1.0;
        for (double i = 1002, j = 1 + n*2; i <= 2000; i += 2, j += 2) {
            if (j > 999) {
                j -= 1000;
            }
            cout << i << " " << j << " " << i / j << endl;
            s *= i / j;
        }
        cout << endl << s << endl;
    }
    for (int x = 1; x < 1000000; x++) {
        if (logb(x, 2) * logb(x, 4) * logb(x, 6) == logb(x, 2) * logb(x, 4) + logb(x, 2) * logb(x, 6) + logb(x, 4) * logb(x, 6)) {
            cout << x << endl;
        }
    }
    return 0;
}