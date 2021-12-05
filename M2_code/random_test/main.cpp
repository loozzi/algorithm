#include <bits/stdc++.h>

using namespace std;

void tao(const char* s)
{
    freopen(s, "w", stdout);
    for(int i = 0; i <= rand(); i++){
        cout << rand()%100000 << " ";
    }
}

string st(int n){
    stringstream ss;
    ss << n;
    return ss.str();
}

int main()
{
    srand(time(0));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        char c[50];
        char d[] = ".inp";
        strcpy(c, st(i).c_str());
        strcat(c, d);
        tao(c);
    }
}
