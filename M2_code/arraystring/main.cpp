#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("ARRSTRING.INP", "r", stdin);
    freopen("ARRSTRING.OUT", "w", stdout);
    char a[1000], s[1000];
    int res = 0;
    gets(a);
    for(int i = 0; i < strlen(a); i++){
        if(a[i]<='9' && a[i]>='0')
            cout << a[i];

    }
}
