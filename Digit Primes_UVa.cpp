#include "bits/stdc++.h"
using namespace std;
#define int long long
#define endl '\n'
#define py cout << "YES\n"
#define pn cout << "NO\n"

const int N = 1e6 + 9;
vector<bool> primes(N, true);
vector<int> pSum(N, 0);

int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        int lb = n % 10;
        sum += lb;
        n = n / 10;
    }

    return sum;
}
void pf(){
    for(int i = 2; i<N; i++){
        if(primes[i] and primes[digit_sum(i)])
        pSum[i] = 1;
    }
    for(int i = 2; i<N; i++){
        pSum[i] = pSum[i-1]  + pSum[i];
    }
}

void sieve() {
    for (int i = 2; i <= sqrt(N); i++) {
        if (primes[i]) {
            for (int j = i * i; j < N; j += i) {
                primes[j] = false;
            }
        }
    }
}

void fun() {
    int l, r;
    cin >> l >> r;
    cout << pSum[r] - pSum[l - 1] << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    pf();
    int t = 1;
    cin >> t;
    while (t--) {
        fun();
    }
}
