#include <bits/stdc++.h>

using namespace std;

bool dps(int n){
    int tich = 1, tong = 0;
    while(n){
        tich *= (n%10);
        tong += (n%10);
        n/=10;
    }
    return (tich%tong==0);
}

int main()
{
    freopen("pds.inp", "r", stdin);
    freopen("pds.out", "w", stdout);
    long long n;
    cin >> n;
    vector<long long> a;
    long long i = 1;
    while(a.size() < n){
        if(dps(i))
            a.push_back(i);
        i++;
    }
    cout << a[n-1];

}
