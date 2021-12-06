#include <bits/stdc++.h>

using namespace std;

string its(int n){
    stringstream ss;
    ss << n;
    return ss.str();
}

void doc(){
    freopen("CHUSON.INP", "r", stdin);
    freopen("CHUSON.OUT", "w", stdout);
}

void xuli(){
    int n;
    while(cin >> n){
        int i = 1;
        while(its(i).length() * i < n){
//            s = its(i);
            n -= its(i).length() * i;
            i++;
        }
        cout << its(i)[n%its(i).length()] << endl;
    }
}

int main()
{
    doc();
    xuli();
}
