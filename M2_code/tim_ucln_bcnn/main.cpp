#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b){
    return (b==0)?a:ucln(b, a%b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ucln(a, b) << endl << a/ucln(a, b)*b;
}
