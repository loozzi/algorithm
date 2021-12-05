#include <bits/stdc++.h>

using namespace std;

string s[10], *a;
int n;

void doc(){
    freopen("LINGVO.INP", "r", stdin);
    freopen("LINGVO.OUT", "w", stdout);
    for(int i = 0; i < 10; i++){
        cin >> s[i];
    }
    cin >> n;
    a = new string[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void xuli(){
    for(int i = 0; i < n; i++){
        string res = s[(int)a[i][0]-48];
        for(int j = 1; j < a[i].length(); j++){
            if(res < s[(int)a[i][j]-48])
                res = s[(int)a[i][j]-48];
        }
        cout << res << endl;
    }
}

int main()
{
    doc();
    xuli();
}
