#include <iostream>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long result = (A % 100) * (B % 100) % 100;
    result = result * (C % 100) % 100;
    result = result * (D % 100) % 100;

    // Print with leading zero if needed
    if(result < 10)
        cout << "0" << result << endl;
    else
        cout << result << endl;

    return 0;
}

