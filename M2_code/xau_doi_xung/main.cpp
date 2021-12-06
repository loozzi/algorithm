#include <bits/stdc++.h>

using namespace std;

bool dx(string s){
    for(int i = 0; i <= s.length()/2; i++){
        if(s[i] != s[s.length()-i-1]){
            return false;
        }

    }
    return true;
}

int main()
{
    int n, sl = 0;
    string tmp;
    cin >> n;
    bool pt[n];
    memset(pt, false, n);
    for(int i = 0; i < n; i++){
        cin >> tmp;
        if(dx(tmp)){
            sl++;
            pt[i] = true;
        }
    }
    cout << sl << endl;
    for(int i = 0; i < n; i++){
        if(pt[i])
            cout << i+1 << " ";
    }

}
