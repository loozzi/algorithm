#include <bits/stdc++.h>

using namespace std;

int k, a[7];
string s, res;

void doc(){
    freopen("MASO.INP", "r", stdin);
    freopen("MASO.OUT", "w", stdout);
    cin >> k >> s;
    for(int i = 0; i < 7; i++){
        cin >> a[i];
    }
    cin >> res;
}

void xuli(){
    int sum = 0;
    for(int i = 0; i < 7; i++)
        sum += ((int)(s[i]) - 48) * a[i];

    cout << res[sum%k];

}

int main()
{
        doc();
        xuli();
}
