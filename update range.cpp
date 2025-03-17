#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long

void fun() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1, 0), d(n + 2, 0), pSum(n + 2, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) d[i] = a[i] - a[i - 1];
    while (q--) {
        int l, r, val;
        cin >> l >> r >> val;
        d[l] += val;
        d[r + 1] -= val;
    }

    for (int i = 1; i <= n; i++) {
        pSum[i] = pSum[i - 1] + d[i];
    }

    for (int i = 1; i <= n; i++) cout << pSum[i] << " ";
    cout << endl;
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
