#include <bits/stdc++.h>
using namespace std;

#define Max_Val 1e+7

int main() {
    int N;
    cin >> N;

    int P[1000009];
    for (int i=1; i<=1000000; i++) P[i] = -1;

    int A;
    int ans = Max_Val;
    for (int i=1; i<=N; i++) {
        cin >> A;
        if (P[A] == -1) P[A] = i;
        else {
            ans = min(ans, i - P[A] + 1);
            P[A] = i;
        }
    }

    if (ans == Max_Val) cout << -1 << endl;
    else cout << ans << endl;
}