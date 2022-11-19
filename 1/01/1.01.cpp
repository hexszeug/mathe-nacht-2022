#include <bits/stdc++.h>

using namespace std;

#define INTLIM 2147483647
#define MAX 1000

vector<bool> buff;
int prime;

bool testforprime(int n) {
    if (n <= prime) return buff[n];
    int max = ceil(sqrt(n));
    for (int x = 2; x <= max; x++) {
        if (buff[x]) {
            if (n % x == 0) {
                buff[n] = false;
                return false;
            }
        }
    }
    prime = n;
    buff[n] = true;
    return true;
}

int main() {
    buff.resize((MAX));
    buff[0] = false;
    buff[1] = false;
    buff[2] = true;
    prime = 2;
    vector<int> primes;
    for (int i = 2; i <= MAX; i++) {
        if (testforprime(i)) {
            primes.push_back(i);
            cout << i << "\n";
        }
    }
    int numP = primes.size();
    cout << "{\n";
    for (int a = 0; a < numP; a++) {
        for (int b = 0; b < numP; b++) {
            for (int c = 0; c < numP; c++) {
                for (int d = 0; d < numP; d++) {
                    if (0 == 42*primes[a] - 39*primes[b] + 91*primes[c] - 273*primes[d]) {
                        cout << "(" << primes[a] << ";" << primes[b] << ";" << primes[c] << ";" << primes[d] << ")\n";
                    }
                }
            }
        // cout << primes[b] << "\n";
        }
    }
    cout << "}" << endl;
}