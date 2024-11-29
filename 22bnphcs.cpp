#include <iostream>
#include <algorithm>
using namespace std;

string canReachRating(long long N, long long X, long long Y, long long P) {
    // Hitung rating maksimum
    long long maxJia = X;
    long long currentYiko = Y;

    for (long long i = 0; i < N; ++i) {
        long long gain = max(1LL, currentYiko - maxJia + 1);
        maxJia += gain;
        currentYiko = max(0LL, currentYiko - gain);
    }

    // Hitung rating minimum
    long long minJia = X;
    currentYiko = Y;

    for (long long i = 0; i < N; ++i) {
        long long loss = max(1LL, minJia - currentYiko + 1);
        minJia = max(0LL, minJia - loss);
        currentYiko += loss;
    }

    // Periksa apakah P dapat dicapai
    if (minJia <= P && P <= maxJia) {
        return "YA";
    } else {
        return "TIDAK";
    }
}

int main() {
    long long N, X, Y, P;
    cin >> N >> X >> Y >> P;
    cout << canReachRating(N, X, Y, P) << endl;
    return 0;
}

