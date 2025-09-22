#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;


    int x = A, y = B, z = C;


    int mn = min(A, min(B, C));
    int mx = max(A, max(B, C));
    int mid = A + B + C - mn - mx;


    cout << mn << endl;
    cout << mid << endl;
    cout << mx << endl;

    cout << endl;


    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    return 0;
}

