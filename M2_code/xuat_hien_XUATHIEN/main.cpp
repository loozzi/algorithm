#include <bits/stdc++.h>

using namespace std;

string ts(long long a){
    stringstream ss;
    ss << a;
    return ss.str();
}

int main()
{
    freopen("XUATHIEN.INP", "r", stdin);
    freopen("XUATHIEN.OUT", "w", stdout);
    long long m, n, res = 0;
    cin >> m >> n;
    string tmp, b = "";
    long long a[m];
    for(int i = 0; i < m ; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
        cin >> tmp;
        b+= tmp + " ";
    }
    for(int i = 0; i < m ; i++){
        if(b.find(ts(a[i]),0)!=string::npos)
            res++;
    }
    cout << res;
}
