#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n, res = 0;
    cin >> n;
    for(int i = 0; i < s.length(); i++){
        res += ((int)s[i] - (int)'a' + n) % 26;
    }
    cout << res;
}
