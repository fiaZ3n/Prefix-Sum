#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void fun() {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    int i = 0, j = 0;
    while (i < n and j < m) {
        if (a[i] == b[j]) {
            i++;
            cnt++;
        }
        j++;
    }
    cout << cnt << endl;
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    optimize();

    int t;
    cin >> t;
    while (t--) {
        fun();
    }

    return 0;
}
