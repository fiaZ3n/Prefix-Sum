#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long

void fun() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<int> pSum(s.size() + 1, 0);
    for (int i = 1; i < s.size(); i++) pSum[i] = pSum[i - 1] + (s[i - 1] == s[i]);
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pSum[r - 1] - pSum[l - 1] << endl;
    }
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    optimize();

    fun();

    return 0;
}
