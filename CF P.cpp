
#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    // Get the first digit
    int firstDigit = X / 1000;

    if (firstDigit % 2 == 0)
        cout << "EVEN" << endl;
    else
        cout << "ODD" << endl;

    return 0;
}
