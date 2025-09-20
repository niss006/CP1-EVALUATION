#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;

    if (X >= 'a' && X <= 'z') {
        // convert lowercase to uppercase
        X = X - 32;
    } else if (X >= 'A' && X <= 'Z') {
        // convert uppercase to lowercase
        X = X + 32;
    }

    cout << X << endl;

    return 0;
}

