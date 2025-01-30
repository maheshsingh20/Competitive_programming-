#include <iostream>
using namespace std;
/*MODULAR ARITHEMETIC*/
int modExp(int a, int b, int m) {
    int res = 1;
    a = a % m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main() {
    int a = 2, b = 10, m = 1000;
    cout << "Modular Exponentiation: " << modExp(a, b, m) << endl;
    return 0;
}
