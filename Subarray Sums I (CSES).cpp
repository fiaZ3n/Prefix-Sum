//https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define int long long

void fun() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    set<int> pSum;
    pSum.insert(0);

    int butt = 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        butt += a[i];
        pSum.insert(butt);
        if (pSum.find(butt - target) != pSum.end()) {
            cnt++;
        }
    }

    cout << cnt << endl;
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
