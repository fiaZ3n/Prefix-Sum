#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'

void fun() {
    string s;
    cin >> s;
    vector<int> a(s.size() + 1);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') a[i + 1]++;
    }
    
    vector<int> pSum(s.size() + 1);
    for (int i = 1; i <= s.size(); i++) {
        pSum[i] = pSum[i - 1] + a[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pSum[r] - pSum[l - 1] << endl;
    }
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
