#include <bits/stdc++.h>

using namespace std;

long long ucln(long long a, long long b){
    return (b==0)?a:ucln(b, a%b);
}

int main()
{
    freopen("GIFT.INP", "r", stdin);
    freopen("GIFT.OUT", "w", stdout);
    long long n, m;
    cin >> n >> m;
    long long uc = ucln(n, m);
    for(int  i = 1; i <= uc/2; i++){
        if(uc % i == 0){
            cout << i << " " << n/i << " " << m/i << endl;
        }
    }
    cout << uc << " " << n/uc << " " << m/uc << endl;
}
