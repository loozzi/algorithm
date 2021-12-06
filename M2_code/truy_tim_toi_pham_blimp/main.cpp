#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("BLIMP.INP", "r", stdin);
    freopen("BLIMP.OUT", "w", stdout);
    int n;
    cin >> n;
    string tmp;
    bool ok = true;
    for(int j = 0; j < n; j++){
        cin >> tmp;
        if(tmp.length() > 0)
            for(int i = 0; i < tmp.length(); i++){
                if(tmp[i] =='F' && tmp[i+1] == 'B' && tmp[i+2] == 'I'){
                    cout << j+1;
                    ok = false;
                }
            }
//        if(tmp.find("FBI", 0) != string::npos){
//            cout << j+1;
//            ok = false;
//        }
    }
    if(ok) cout << "GO";
}
