#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    freopen("COBAN.INP", "r", stdin);
    freopen("COBAN.OUT", "w", stdout);
    int n;
    cin >> n;
    string max_ = "0", max_length="", inp;
    for(int i = 0; i < n; i++){
        cin >> inp;
        if(max_ < inp)
            max_ = inp;
        if(max_length.length() < inp.length())
            max_length = inp;
    }

    cout << max_ << endl << max_length;
}
