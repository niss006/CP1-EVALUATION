#include <iostream>
using namespace std;

int main() {
    int A, B;
    char S;
    cin >> A >> S >> B;

    bool correct = false;

    if (S == '<' && A < B)
        correct = true;
    else if (S == '>' && A > B)
        correct = true;
    else if (S == '=' && A == B)
        correct = true;

    if (correct)
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;

    return 0;
}

