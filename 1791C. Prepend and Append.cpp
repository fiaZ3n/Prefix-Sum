#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void fun() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[n - i - 1]) {
            int a = i, b = n - i - 1;
            cnt = b - a + 1;
            break;
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

    int t;
    cin >> t;
    while (t--) {
        fun();
    }

    return 0;
}
