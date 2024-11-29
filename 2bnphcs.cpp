#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n, x, y, p;
    cin >> n >> x >> y >> p;

    ll jia = x;
    ll yiko = y;

    for (ll i = 0; i < n; i++) {
        if (jia < p) {
            ll gain = max(1LL, yiko - jia + 1);
            jia += gain;
            yiko = max(0LL, yiko - gain);
        } else {  
            ll loss = max(1LL, jia - yiko + 1);
            jia = max(0LL, jia - loss);
            yiko += loss;
        }
    }

    if (jia == p) {
        cout << "YA" << endl;
    } else {
        cout << "TIDAK" << endl;
    }

    return 0;
}
