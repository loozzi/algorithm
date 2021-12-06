#include <bits/stdc++.h>

using namespace std;

int main()
{
    int L, R;
    cin >> L >> R;
    vector<bool> isPrime(R - L + 1, true);  // x là số nguyên tố khi và chỉ khi isPrime[x - l] == true

    for (long long i = 2; i * i <= R; ++i) {
        for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i) {
            isPrime[j - L] = false;
        }
    }

    if (1 >= L) {
        isPrime[1 - L] = false;
    }

    for (long long x = L; x <= R; ++x) {
        if (isPrime[x - L]) {
        }
    }

    for(int i = 0 ; i <= R-L+1; i++){
        if(isPrime[i])
            cout << i+1 << endl;
    }
}
