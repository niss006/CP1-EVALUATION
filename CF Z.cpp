#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long double left = B * log((long double)A);
    long double right = D * log((long double)C);

    if (left > right)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

