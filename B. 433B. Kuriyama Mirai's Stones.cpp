#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long

void fun() {
    int n;
    cin >> n;
    vector<int> a(n + 1), pSum(n + 1, 0), pSum_sorted(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int q;
    cin >> q;
    for (int i = 1; i <= n; i++) pSum[i] = pSum[i - 1] + a[i];
    sort(a.begin(), a.end());
    for (int i = 1; i <= n; i++) pSum_sorted[i] = pSum_sorted[i - 1] + a[i];
    while (q--) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << pSum[r] - pSum[l - 1] << endl;
        else
            cout << pSum_sorted[r] - pSum_sorted[l - 1] << endl;
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
