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
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<int> pSum(n + 1);
    for (int i = 1; i <= n; i++) {
        pSum[i] = pSum[i - 1] + a[i];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pSum[r] - pSum[l - 1] << endl;
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
