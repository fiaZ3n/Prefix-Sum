#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

void fun() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(4, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v[x][i] = 1;
    }

    vector<int> pSum1(n + 1, 0), pSum2(n + 1, 0), pSum3(n + 1, 0);

    for (int j = 1; j <= n; j++) {
        pSum1[j] = pSum1[j - 1] + v[1][j];
        pSum2[j] = pSum2[j - 1] + v[2][j];
        pSum3[j] = pSum3[j - 1] + v[3][j];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pSum1[r] - pSum1[l - 1] << " " << pSum2[r] - pSum2[l - 1] << " " << pSum3[r] - pSum3[l - 1] << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

#endif
    optimize();

    fun();

    return 0;
}
