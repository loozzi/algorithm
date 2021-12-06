#include <bits/stdc++.h>

using namespace std;

string s, k;
int a[1001];

void init(){
    freopen("INPUT.INP", "r", stdin);
    freopen("OUTPUT.OUT", "w", stdout);
}

void process(){
    cin >> s >> k;
    memset(a, 0, sizeof(a));
    s = " " + s;
    k = " " + k;
    for(int i = 2; i < k.length(); i++){
        for(int j = 1; j < i; j++){
            if(k[i] == k[j]){
                a[i] = j;
                break;
            }
        }
    }



    for(int i = 0; i < s.length(); i++){
        cout << a[i] << " ";
    }
}

int main()
{
    init();
    process();
}
