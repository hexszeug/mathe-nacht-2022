#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s = 0;
    int i = 0;
    for (int a = 3; s < 16500; a += 3, i++) {
        s += a;
    }
    cout << i << ";" << 3*(i - 1) << ";" << i*3 << ";";
    double s2 = 0;
    i = 0;
    for (double a = 3.0; s2 < 16500; a *= 1.2, i++) {
        s2 += a;
    }
    cout << i << endl;
    return 0;
}