#include <iostream>
#include <vector>
using namespace std;

long long eval(long long x, long long y, char op) {
    if (op == '+') return x + y;
    if (op == '-') return x - y;
    if (op == '*') return x * y;
    return 0;
}

void permute(vector<long long>& nums, int l, int r, vector<vector<long long>>& all) {
    if (l == r) {
        all.push_back(nums);
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(nums[l], nums[i]);
        permute(nums, l + 1, r, all);
        swap(nums[l], nums[i]);
    }
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<long long> nums = {a, b, c};
    vector<char> ops = {'+', '-', '*'};
    vector<vector<long long>> numPerms;
    permute(nums, 0, 2, numPerms);

    vector<vector<char>> opPerms;
    do {
        opPerms.push_back(ops);
    } while (next_permutation(ops.begin(), ops.end()));

    bool found = false;
    for (auto n : numPerms) {
        for (auto o : opPerms) {

            long long temp1 = eval(n[0], n[1], o[0]);
            long long result1 = eval(temp1, n[2], o[1]);
            if (result1 == d) found = true;

            long long temp2 = eval(n[1], n[2], o[1]);
            long long result2 = eval(n[0], temp2, o[0]);
            if (result2 == d) found = true;
        }
    }

    if (found) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
