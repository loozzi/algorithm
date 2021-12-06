#include <bits/stdc++.h>

using namespace std;

void init(){
    freopen("EPIC.INP", "r", stdin);
    freopen("EPIC.OUT", "w", stdout);
}

int ucln(int a, int b){
    return (b == 0)?a:ucln(b, a%b);
}

void process(){
    int a, b, n;
    cin >> a >> b >> n;
    while(true){
        n -= ucln(a, n);
        if(n == 0){
            cout << 0;
            break;
        }
        n -= ucln(b, n);
        if(n==0){
            cout << 1;
            break;
        }
    }
}

int main()
{
    //init();
    process();
}
