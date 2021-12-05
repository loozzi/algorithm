#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TSNT.INP", "r", stdin);
    freopen("TSNT.OUT", "w", stdout);
    long long n;
    while(cin >> n){
        long long i = 2;
        while(n>1){
            while(n%i == 0){
                cout << i << " ";
                n/=i;
            }
            i++;
        }
        cout << endl;
    }
}
