#include <iostream>
#include <limits>
using namespace std;

int main() {
    long long n, k;
    int a;
    cin >> n >> k >> a;

    long long maxInt = numeric_limits<int>::max();
    long long maxLL = numeric_limits<long long>::max();

    long long result = 1;
    bool needsDouble = false;

    for(int i = 0; i < a; i++) {
        if(result > maxLL / k) { // overflow check
            needsDouble = true;
            break;
        }
        result *= k;
    }

    if(!needsDouble) {
        if(result > maxLL / n) {
            needsDouble = true;
        } else {
            result *= n;
        }
    }

    if(needsDouble) {
        cout << "double" << endl;
    } else if(result > maxInt) {
        cout << "long long" << endl;
    } else {
        cout << "int" << endl;
    }

    return 0;
}

