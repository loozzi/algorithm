#include <bits/stdc++.h>

using namespace std;

string ts(int x){
    stringstream ss;
    ss << x;
    return ss.str();
}

bool snt(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i)
            return false;
    return true;
}

int main()
{
    freopen("MPRIME.INP", "r", stdin);
    freopen("MPRIME.OUT", "w", stdout);
    long long k, sl = 1000001;
    cin >> k;
    bool a[sl];
    memset(a, true, sizeof(a));
    for(int i = 2; i <= sqrt(sl); i++){
        if(a[i])
            for(int j = 2*i; j<=sl; j+=i)
                a[j] = false;
    }
    vector<string> b;
    string s = "";
    for(int i = 2; b.size() < k; i++){
        if(a[i]){
            if(s == "")
                s += ts(i);
            else {
                s += ts(i);
                if(snt(atoi(s.c_str())))
                    b.push_back(s);
                s = "";
            }
        }
    }
    cout << b[k-1];
}
