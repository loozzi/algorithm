#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b){
    return (b==0)?a:ucln(b, a%b);
}

int main()
{
    freopen("NTTD.INP", "r", stdin);
    freopen("NTTD.OUT", "w", stdout);
    int m, n;
    cin >> m >> n;
    int uc = ucln(m, n);
    for(int i = 2; i <= uc; i++){
        while(m%i==0) m/=i;
        while(n%i==0) n/=i;
    }
    (m==n)?cout << "true":cout << "false";
}
