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
    vector<int> a(n + 1), pSum(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        pSum[i] = pSum[i - 1] + a[i];
    }
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        int first = pSum[i] - pSum[0];
        int second = pSum[n] - pSum[i];
        if (first == second) cnt++;
    }
    cout << cnt << endl;
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
