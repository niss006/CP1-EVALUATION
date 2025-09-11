→ SourceCopy
#include <iostream>
#include<iomanip>
#define pi 3.141592653
using namespace std;

int main() {
    cout << fixed << setprecision(9);

    double r;
    cin >> r;

    double area = pi * r * r;
    cout << area;


    return 0;
}
