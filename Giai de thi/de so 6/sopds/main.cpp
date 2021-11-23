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
    freopen("sopds.inp", "r", stdin);
    freopen("sopds.out", "w", stdout);
    long long n;
    cin >> n;
    vector<long long> a;
    long long i = 0;
    while(a.size() < n){
        i++;
        if(dps(i))
            a.push_back(i);
    }
    cout << a[n-1];

    for(int i= 0 ; i < 100; i++)
        cout << a[i] << " ";

}
