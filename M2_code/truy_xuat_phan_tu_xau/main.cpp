#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("PHANTU.INP", "r", stdin);
    freopen("PHANTU.OUT", "w", stdout);
    string a, b;
    getline(cin, a);
    getline(cin, b);

    // 1
    if(a[a.length()-1] == b[0])
        cout << "co" << endl;
    else
        cout << "khong" << endl;

    // 2
    int dem = 0;
    for(int i = 0; i < a.length(); i++){
        if(b[0] == a[i])
            dem++;
    }
    cout << dem << endl;

    // 3
    for(int i = a.length()-1; i >=0; i--)
        cout << a[i];
    cout << endl;

    // 4
    for(int i = 0; i < b.length(); i++)
        if(b[i] != ' ')
            cout << b[i];
    cout << endl;

    // 5
    string c;
    for(int i = 0; i < a.length(); i++)
        if(a[i] >= '0' && a[i] <= '9')
            c += a[i];
    cout << c << endl;

    // 6
    bool doiXung = true;
    for(int i = 0 ; i <= c.length(); i++){
        if(c[i] != c[c.length()-1-i])
            doiXung = false;
    }
    cout << doiXung;
}
