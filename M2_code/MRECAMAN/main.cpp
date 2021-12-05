#include <bits/stdc++.h>

using namespace std;

void doc(){
    freopen("MRE.INP", "r", stdin);
    freopen("MRE.OUT", "w", stdout);
}

void xuli(){
    int n, i = 1, k;
    vector<int> a;
    a.push_back(0);
    bool b[100000];
    memset(b, 0, sizeof(b));
    b[0] = true;

    while(true){
        cin >> n;
        if(n==-1) break;
        while(n >= a.size()){
            if(a[i-1] - i > 0 && b[a[i-1] - i]==false)
                k = a[i-1] - i;
            else
                k = a[i-1] + i;
            b[k] = true;
            a.push_back(k);
            i++;
        }
        cout << a[n] << endl;
    }
}

int main()
{
    doc();
    xuli();
}
