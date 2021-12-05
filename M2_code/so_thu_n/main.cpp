#include <bits/stdc++.h>

using namespace std;

long long a[100000000];
vector<string> res;


void inKQ(long long n){
    string dt = "";
    for(long long i = 1; i <= n; i++){
        if(a[i] == 0)
            dt += "4";
        else
            dt += "7";
    }
    res.push_back(dt);
}

void dq(long long i, long long n){
    for(int j = 0; j<=1; j++){
        a[i] = j;
        if(i == n){

            inKQ(n);
        } else
        dq(i+1, n);
    }
}

int main()
{
    freopen("SOTN.INP", "r", stdin);
    freopen("SOTN.OUT", "w", stdout);
    long long n, t;
    long long dem = 1;
    cin >> t;
    while(t--){
        cin >> n;
        while(res.size() <= n+2){
            dq(1, dem);
            dem++;
        }
        cout << res[n-1] << endl;
    }

}
