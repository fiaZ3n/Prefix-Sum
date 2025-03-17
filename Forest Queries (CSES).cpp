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
    vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char x;
            cin >> x;
            if (x == '*') arr[i][j]++;
        }
    }
    vector<vector<int>> pSum(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            pSum[i][j] = arr[i][j] + pSum[i - 1][j] + pSum[i][j - 1] - pSum[i - 1][j - 1];
        }
    }

    while (q--) {
        int b, a, d, c;
        cin >> a >> b >> c >> d;
        cout << pSum[c][d] - pSum[a - 1][d] - pSum[c][b - 1] + pSum[a - 1][b - 1] << endl;
    }

    cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    optimize();

    fun();

    return 0;
}
