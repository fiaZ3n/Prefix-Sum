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
    vector<int> a(n + 1), s(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    cout << a[1];
    for (int i = 2; i <= n; i++) {
        s[i] = a[i] - a[i - 1];
        cout << " " << s[i];
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
