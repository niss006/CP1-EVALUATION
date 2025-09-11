#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long LDN = N % 10;
    long long LDM = M % 10;

    long long sum = LDN + LDM;
    cout << sum << '\n';


    return 0;
}
