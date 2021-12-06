#include <bits/stdc++.h>

using namespace std;

string a[10] = {"zero", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf"};

int main()
{
    freopen("LINGVO.INP", "r", stdin);
    freopen("LINGVO.OUT", "w", stdout);
    string s;
    getline(cin, s);
    int n, tmp;
    cin >> n;
    while(n--){
        cin >> tmp;
        string res = "";
        int tmp2;
        while(tmp){
            if(res < a[tmp%10])
                res = a[tmp%10];
            tmp /= 10;
        }
        cout << res << endl;

    }


}
