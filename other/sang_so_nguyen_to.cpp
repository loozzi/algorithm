#include <bits/stdc++.h>

using namespace std;

bool *a;

void sang(int n){
    a = new bool[n+1];
    memset(a, 1, sizeof(bool) * (n+1));
//    for(int i = 0; i <= n; i++)
//        a[i] = true;
    a[0]=a[1]=false;
    for(int i = 2; i * i < n; i++)
        if(a[i] == true)
            for(int j = i*i; j <= n; j+=i)
                a[j] = false;
}

int main()
{
    sang(20);
    for(int i = 0; i < 20; i++){
        if(a[i])
            cout << i << "\t";
    }
}
