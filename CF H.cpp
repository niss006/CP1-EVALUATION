#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int floorVal = A / B;
    int ceilVal = (A % B == 0) ? A / B : (A / B + 1);
    int roundVal = ( (A % B) * 2 >= B ) ? (A / B + 1) : (A / B);

    cout << "floor " << A << " / " << B << " = " << floorVal << "\n";
    cout << "ceil "  << A << " / " << B << " = " << ceilVal  << "\n";
    cout << "round " << A << " / " << B << " = " << roundVal << "\n";

    return 0;
}
