#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double N;
    cin >> N;

    long long integerPart = (long long)N;
    double decimalPart = N - integerPart;

    if (fabs(decimalPart) < 1e-9) {
        // N is integer
        cout << "int " << integerPart << endl;
    } else {
        // N is float
        cout << "float " << integerPart << " " << decimalPart << endl;
    }

    return 0;
}
