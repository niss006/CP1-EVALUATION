#include <iostream>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    bool divA = (a % k == 0);
    bool divB = (b % k == 0);

    if (divA && divB)
        cout << "Both" << endl;
    else if (divA)
        cout << "Memo" << endl;
    else if (divB)
        cout << "Momo" << endl;
    else
        cout << "No One" << endl;

    return 0;
}

