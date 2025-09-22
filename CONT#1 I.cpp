#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int tens = N / 10;
    int units = N % 10;

    if (tens != 0 && units % tens == 0)
        cout << "YES" << endl;
    else if (units != 0 && tens % units == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

