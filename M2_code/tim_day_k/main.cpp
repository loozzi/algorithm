#include <bits/stdc++.h>

using namespace std;

int sldx(string s){
    int res = 0;
    for(int i = 0 ; i <= s.length()/2; i++){
        if(s[i] != s[s.length()-i-1])
            break;
        res++;
    }
    return res;
}

int main()
{
    freopen("DAYK.INP", "r", stdin);
    freopen("DAYK.OUT", "w", stdout);
    int n;
    cin >> n;
    string s;
    getline(cin, s);
//    for(int i = 0;i < n; i++){
//        int dem  = 0;
//        for(int j = 0; j <= j/2; j++){
//            if(s[j] == s[i-j])
//                dem ++;
//        }
//        cout << dem << " ";
//    }
cout << sldx(s);
}
